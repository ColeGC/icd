#!/usr/bin/env bash
set +e +o pipefail
set -x
# dump all possibly relevant environment, to help Travis debugging in particular.
#exec >&2

# System
uname -a
pwd
printenv | sort
## macos, homebrew
if command -v brew >/dev/null; then
    brew list
    brew doctor
    brew environment
fi
## debian/ubuntu
if command -v dpkg >/dev/null; then
    dpkg -l | grep -e r-cran -e r-base
    dpkg -L r-cran-rcpp | sed 's/Rcpp\/.*$/Rcpp/' | sort -u || true
    dpkg -L r-cran-rcppeigen | sed 's/RcppEigen\/.*$/RcppEigen/' | sort -u || true
fi

command -v R
command -v Rscript

RH="$(R RHOME)"
RHE="${RH}/etc"

echo "R RHOME gives '${RH}'" >&2

#find "${HOME}/.R" -print -exec cat '{}' \;
cat "${RHE}/Renviron"
cat "${RHE}/Renviron.site"
cat "${HOME}/.Renviron"
cat "${HOME}/.R/check.Renviron"
cat "${HOME}/.R/build.Renviron"

# profile
cat "${RHE}/Rprofile.site"
cat "${HOME}/.Rprofile"

# compiled code
cat "${RHE}/Makeconf"
cat "${RHE}/Makevars.site"
cat "${RHE}/ldpaths"

R CMD config --all

ls -R ~/.R
#ls -R "${PWD}"

# R

## libraries
declare -a pths
pths=("${HOME}/R/Library" 
"${HOME}"/R-bin/lib/R/library 
"${RH}"/{site-,}library 
/usr/{local/,}lib/R/{site-,}library 
)
for lib in "${pths[@]}"; do
    {
        ! [[ -d "$lib" ]] && 
            echo "R library path: $lib NOT present" &&
            continue;

        echo "R library path: $lib is present";
        ls -ld "$lib";
    }
done

R --slave <<_EOF
options()
options(echo=TRUE)
print.default(.libPaths(), quote = FALSE)
.Platform
.dynLibs()
.Library
.Library.site
searchpaths()
search()
sessionInfo() 
if (requireNamespace("sessioninfo", quietly = TRUE, warn.conflicts = FALSE)) sessioninfo::session_info()
_EOF

# this package
[[ -f .Rbuildignore ]] && cat .Rbuildignore || echo "No .Rbuildignore!" >&2
[[ -f .Rinstignore ]] && cat .Rinstignore || echo "No .Rinstignore" >&2
cat DESCRIPTION || echo "No DESCRIPTION!" >&2

true
