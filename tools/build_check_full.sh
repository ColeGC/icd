#!/bin/bash
pushd /tmp
#Rscript -e 'devtools::install_github("jackwasey/jwutil")'
R CMD build ~/icd

# for all environment variable options see here:
# https://cran.r-project.org/doc/manuals/r-release/R-ints.html#Tools
ICD_TEST_SLOW=true \
ICD_TEST_BUILD_DATA=true \
ICD_TEST_DEPRECATED=true \
_R_CHECK_CODETOOLS_PROFILE_="suppressLocalUnused=FALSE" \
 _R_CHECK_VIGNETTES_NLINES_=0 \
 _R_CHECK_RD_EXAMPLES_T_AND_F_=TRUE \
 _R_CHECK_CODE_ASSIGN_TO_GLOBALENV_=TRUE \
 _R_CHECK_EXIT_ON_FIRST_ERROR_=TRUE \
 _R_CHECK_TESTS_NLINES_=0 \
 _R_CHECK_NATIVE_ROUTINE_REGISTRATION_=TRUE \
 R CMD check --as-cran "$(ls -t /tmp/icd*.tar.gz | head -1)"
popd
