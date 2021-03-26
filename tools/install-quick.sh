#!/usr/bin/env bash
set -eu
IFS=$'\n\t'
# shellcheck disable=SC1090
source "${ICD_HOME:-$HOME/icd}/tools/build-quick.sh"

(
[[ -f "$HOME/.R/Makevars.quick" ]] && export R_MAKEVARS_USER="$HOME/.R/Makevars.quick"
MAKEFLAGS=-j$(getconf _NPROCESSORS_ONLN) 
export MAKEFLAGS
R CMD INSTALL --debug \
    --data-compress=none \
    --configure-args="CXX11FLAGS=-O0" \
    --install-tests \
    --no-staged-install \
    icd*.tar.gz

    #    --library="$install_dir" \
    #    --no-byte-compile \
    #    --no-resave-data \
    #    --no-build-vignettes \
    #    --no-clean-on-error \
    #    --no-docs \
)
