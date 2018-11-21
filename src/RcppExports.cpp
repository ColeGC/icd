// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "icd_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// icd9MajMinToCode
CV icd9MajMinToCode(const CV mjr, const CV mnr, bool isShort);
RcppExport SEXP _icd_icd9MajMinToCode(SEXP mjrSEXP, SEXP mnrSEXP, SEXP isShortSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type mjr(mjrSEXP);
    Rcpp::traits::input_parameter< const CV >::type mnr(mnrSEXP);
    Rcpp::traits::input_parameter< bool >::type isShort(isShortSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9MajMinToCode(mjr, mnr, isShort));
    return rcpp_result_gen;
END_RCPP
}
// icd9MajMinToShort
CV icd9MajMinToShort(const CV mjr, const CV mnr);
RcppExport SEXP _icd_icd9MajMinToShort(SEXP mjrSEXP, SEXP mnrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type mjr(mjrSEXP);
    Rcpp::traits::input_parameter< const CV >::type mnr(mnrSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9MajMinToShort(mjr, mnr));
    return rcpp_result_gen;
END_RCPP
}
// icd9MajMinToDecimal
CV icd9MajMinToDecimal(const CV mjr, const CV mnr);
RcppExport SEXP _icd_icd9MajMinToDecimal(SEXP mjrSEXP, SEXP mnrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type mjr(mjrSEXP);
    Rcpp::traits::input_parameter< const CV >::type mnr(mnrSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9MajMinToDecimal(mjr, mnr));
    return rcpp_result_gen;
END_RCPP
}
// setDecimalDiag
void setDecimalDiag(Rcpp::RObject& x, bool value);
RcppExport SEXP _icd_setDecimalDiag(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    setDecimalDiag(x, value);
    return R_NilValue;
END_RCPP
}
// setShortDiag
void setShortDiag(Rcpp::RObject& x, bool value);
RcppExport SEXP _icd_setShortDiag(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    setShortDiag(x, value);
    return R_NilValue;
END_RCPP
}
// categorize_rcpp
List categorize_rcpp();
RcppExport SEXP _icd_categorize_rcpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(categorize_rcpp());
    return rcpp_result_gen;
END_RCPP
}
// icd10cmChildrenDefined
CV icd10cmChildrenDefined(CV& x, Rcpp::List icd10cm2016, Rcpp::IntegerVector nc);
RcppExport SEXP _icd_icd10cmChildrenDefined(SEXP xSEXP, SEXP icd10cm2016SEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type icd10cm2016(icd10cm2016SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(icd10cmChildrenDefined(x, icd10cm2016, nc));
    return rcpp_result_gen;
END_RCPP
}
// simplifyMapLexicographic
Rcpp::List simplifyMapLexicographic(const CV& pt_codes, const Rcpp::List map);
RcppExport SEXP _icd_simplifyMapLexicographic(SEXP pt_codesSEXP, SEXP mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV& >::type pt_codes(pt_codesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type map(mapSEXP);
    rcpp_result_gen = Rcpp::wrap(simplifyMapLexicographic(pt_codes, map));
    return rcpp_result_gen;
END_RCPP
}
// comorbidMatMulWide
LogicalMatrix comorbidMatMulWide(const DataFrame& data, const List& map, const std::string id_name, const CV code_names);
RcppExport SEXP _icd_comorbidMatMulWide(SEXP dataSEXP, SEXP mapSEXP, SEXP id_nameSEXP, SEXP code_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const List& >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const std::string >::type id_name(id_nameSEXP);
    Rcpp::traits::input_parameter< const CV >::type code_names(code_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(comorbidMatMulWide(data, map, id_name, code_names));
    return rcpp_result_gen;
END_RCPP
}
// comorbidMatMulSimple
LogicalMatrix comorbidMatMulSimple(const DataFrame& data, const List& map, const std::string id_name, const std::string code_name);
RcppExport SEXP _icd_comorbidMatMulSimple(SEXP dataSEXP, SEXP mapSEXP, SEXP id_nameSEXP, SEXP code_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const List& >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const std::string >::type id_name(id_nameSEXP);
    Rcpp::traits::input_parameter< const std::string >::type code_name(code_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(comorbidMatMulSimple(data, map, id_name, code_name));
    return rcpp_result_gen;
END_RCPP
}
// icd9PartsToShort
CV icd9PartsToShort(const Rcpp::List parts);
RcppExport SEXP _icd_icd9PartsToShort(SEXP partsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type parts(partsSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9PartsToShort(parts));
    return rcpp_result_gen;
END_RCPP
}
// icd9PartsToDecimal
CV icd9PartsToDecimal(const Rcpp::List parts);
RcppExport SEXP _icd_icd9PartsToDecimal(SEXP partsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type parts(partsSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9PartsToDecimal(parts));
    return rcpp_result_gen;
END_RCPP
}
// icd9MajMinToParts
Rcpp::List icd9MajMinToParts(const CV mjr, const CV mnr);
RcppExport SEXP _icd_icd9MajMinToParts(SEXP mjrSEXP, SEXP mnrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type mjr(mjrSEXP);
    Rcpp::traits::input_parameter< const CV >::type mnr(mnrSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9MajMinToParts(mjr, mnr));
    return rcpp_result_gen;
END_RCPP
}
// icd9ShortToPartsCpp
Rcpp::List icd9ShortToPartsCpp(CV icd9Short, Rcpp::String mnrEmpty);
RcppExport SEXP _icd_icd9ShortToPartsCpp(SEXP icd9ShortSEXP, SEXP mnrEmptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type icd9Short(icd9ShortSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type mnrEmpty(mnrEmptySEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ShortToPartsCpp(icd9Short, mnrEmpty));
    return rcpp_result_gen;
END_RCPP
}
// icd10ShortToPartsCpp
Rcpp::List icd10ShortToPartsCpp(const CV x, const Rcpp::String mnr_empty);
RcppExport SEXP _icd_icd10ShortToPartsCpp(SEXP xSEXP, SEXP mnr_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String >::type mnr_empty(mnr_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(icd10ShortToPartsCpp(x, mnr_empty));
    return rcpp_result_gen;
END_RCPP
}
// icd9DecimalToPartsCpp
Rcpp::List icd9DecimalToPartsCpp(const CV icd9Decimal, const Rcpp::String mnr_empty);
RcppExport SEXP _icd_icd9DecimalToPartsCpp(SEXP icd9DecimalSEXP, SEXP mnr_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type icd9Decimal(icd9DecimalSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String >::type mnr_empty(mnr_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(icd9DecimalToPartsCpp(icd9Decimal, mnr_empty));
    return rcpp_result_gen;
END_RCPP
}
// icd10DecimalToPartsCpp
Rcpp::List icd10DecimalToPartsCpp(const CV x, const Rcpp::String mnr_empty);
RcppExport SEXP _icd_icd10DecimalToPartsCpp(SEXP xSEXP, SEXP mnr_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String >::type mnr_empty(mnr_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(icd10DecimalToPartsCpp(x, mnr_empty));
    return rcpp_result_gen;
END_RCPP
}
// icd9ShortToDecimal
CV icd9ShortToDecimal(const CV x);
RcppExport SEXP _icd_icd9ShortToDecimal(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ShortToDecimal(x));
    return rcpp_result_gen;
END_RCPP
}
// icd9DecimalToShort
CV icd9DecimalToShort(const CV x);
RcppExport SEXP _icd_icd9DecimalToShort(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9DecimalToShort(x));
    return rcpp_result_gen;
END_RCPP
}
// icd9GetMajor
CV icd9GetMajor(const CV x, const bool short_code);
RcppExport SEXP _icd_icd9GetMajor(SEXP xSEXP, SEXP short_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CV >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool >::type short_code(short_codeSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9GetMajor(x, short_code));
    return rcpp_result_gen;
END_RCPP
}
// fastIntToStringRcpp
Rcpp::CharacterVector fastIntToStringRcpp(Rcpp::IntegerVector x);
RcppExport SEXP _icd_fastIntToStringRcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fastIntToStringRcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// guessShortPlusFactorCpp
bool guessShortPlusFactorCpp(SEXP x_, int n);
RcppExport SEXP _icd_guessShortPlusFactorCpp(SEXP x_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(guessShortPlusFactorCpp(x_, n));
    return rcpp_result_gen;
END_RCPP
}
// guessShortCompleteCpp
bool guessShortCompleteCpp(SEXP x_, SEXP short_code, int n, SEXP icd_name);
RcppExport SEXP _icd_guessShortCompleteCpp(SEXP x_SEXP, SEXP short_codeSEXP, SEXP nSEXP, SEXP icd_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type short_code(short_codeSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< SEXP >::type icd_name(icd_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(guessShortCompleteCpp(x_, short_code, n, icd_name));
    return rcpp_result_gen;
END_RCPP
}
// icd9_is_n_cpp
std::vector<bool> icd9_is_n_cpp(const VecStr& sv);
RcppExport SEXP _icd_icd9_is_n_cpp(SEXP svSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const VecStr& >::type sv(svSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9_is_n_cpp(sv));
    return rcpp_result_gen;
END_RCPP
}
// icd9_is_v_cpp
std::vector<bool> icd9_is_v_cpp(const VecStr& sv);
RcppExport SEXP _icd_icd9_is_v_cpp(SEXP svSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const VecStr& >::type sv(svSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9_is_v_cpp(sv));
    return rcpp_result_gen;
END_RCPP
}
// icd9_is_e_cpp
std::vector<bool> icd9_is_e_cpp(const VecStr& sv);
RcppExport SEXP _icd_icd9_is_e_cpp(SEXP svSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const VecStr& >::type sv(svSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9_is_e_cpp(sv));
    return rcpp_result_gen;
END_RCPP
}
// longToWideCpp
CV longToWideCpp(const SEXP& x, const std::string id_name, const std::string code_name, bool aggregate);
RcppExport SEXP _icd_longToWideCpp(SEXP xSEXP, SEXP id_nameSEXP, SEXP code_nameSEXP, SEXP aggregateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string >::type id_name(id_nameSEXP);
    Rcpp::traits::input_parameter< const std::string >::type code_name(code_nameSEXP);
    Rcpp::traits::input_parameter< bool >::type aggregate(aggregateSEXP);
    rcpp_result_gen = Rcpp::wrap(longToWideCpp(x, id_name, code_name, aggregate));
    return rcpp_result_gen;
END_RCPP
}
// icd9AddLeadingZeroesMajorSingle
Rcpp::String icd9AddLeadingZeroesMajorSingle(Rcpp::String mjr);
RcppExport SEXP _icd_icd9AddLeadingZeroesMajorSingle(SEXP mjrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type mjr(mjrSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9AddLeadingZeroesMajorSingle(mjr));
    return rcpp_result_gen;
END_RCPP
}
// icd9AddLeadingZeroesMajorSingleStd
std::string icd9AddLeadingZeroesMajorSingleStd(std::string m);
RcppExport SEXP _icd_icd9AddLeadingZeroesMajorSingleStd(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9AddLeadingZeroesMajorSingleStd(m));
    return rcpp_result_gen;
END_RCPP
}
// icd9AddLeadingZeroesMajor
CV icd9AddLeadingZeroesMajor(CV mjr);
RcppExport SEXP _icd_icd9AddLeadingZeroesMajor(SEXP mjrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type mjr(mjrSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9AddLeadingZeroesMajor(mjr));
    return rcpp_result_gen;
END_RCPP
}
// icd9AddLeadingZeroes
CV icd9AddLeadingZeroes(CV x, bool short_code);
RcppExport SEXP _icd_icd9AddLeadingZeroes(SEXP xSEXP, SEXP short_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type short_code(short_codeSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9AddLeadingZeroes(x, short_code));
    return rcpp_result_gen;
END_RCPP
}
// icd9ExpandMinor
CV icd9ExpandMinor(const Str& mnr, bool isE);
RcppExport SEXP _icd_icd9ExpandMinor(SEXP mnrSEXP, SEXP isESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Str& >::type mnr(mnrSEXP);
    Rcpp::traits::input_parameter< bool >::type isE(isESEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ExpandMinor(mnr, isE));
    return rcpp_result_gen;
END_RCPP
}
// icd9ChildrenShort
CV icd9ChildrenShort(CV icd9Short, const VecStr& icd9cmReal, bool onlyReal);
RcppExport SEXP _icd_icd9ChildrenShort(SEXP icd9ShortSEXP, SEXP icd9cmRealSEXP, SEXP onlyRealSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type icd9Short(icd9ShortSEXP);
    Rcpp::traits::input_parameter< const VecStr& >::type icd9cmReal(icd9cmRealSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyReal(onlyRealSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ChildrenShort(icd9Short, icd9cmReal, onlyReal));
    return rcpp_result_gen;
END_RCPP
}
// icd9ChildrenShortUnordered
CV icd9ChildrenShortUnordered(CV icd9Short, const VecStr& icd9cmReal, bool onlyReal);
RcppExport SEXP _icd_icd9ChildrenShortUnordered(SEXP icd9ShortSEXP, SEXP icd9cmRealSEXP, SEXP onlyRealSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type icd9Short(icd9ShortSEXP);
    Rcpp::traits::input_parameter< const VecStr& >::type icd9cmReal(icd9cmRealSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyReal(onlyRealSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ChildrenShortUnordered(icd9Short, icd9cmReal, onlyReal));
    return rcpp_result_gen;
END_RCPP
}
// icd9ChildrenDecimalCpp
CV icd9ChildrenDecimalCpp(CV icd9Decimal, const VecStr& icd9cmReal, bool onlyReal);
RcppExport SEXP _icd_icd9ChildrenDecimalCpp(SEXP icd9DecimalSEXP, SEXP icd9cmRealSEXP, SEXP onlyRealSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type icd9Decimal(icd9DecimalSEXP);
    Rcpp::traits::input_parameter< const VecStr& >::type icd9cmReal(icd9cmRealSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyReal(onlyRealSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ChildrenDecimalCpp(icd9Decimal, icd9cmReal, onlyReal));
    return rcpp_result_gen;
END_RCPP
}
// icd9ChildrenCpp
CV icd9ChildrenCpp(CV icd9, bool isShort, const VecStr icd9cmReal, bool onlyReal);
RcppExport SEXP _icd_icd9ChildrenCpp(SEXP icd9SEXP, SEXP isShortSEXP, SEXP icd9cmRealSEXP, SEXP onlyRealSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CV >::type icd9(icd9SEXP);
    Rcpp::traits::input_parameter< bool >::type isShort(isShortSEXP);
    Rcpp::traits::input_parameter< const VecStr >::type icd9cmReal(icd9cmRealSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyReal(onlyRealSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9ChildrenCpp(icd9, isShort, icd9cmReal, onlyReal));
    return rcpp_result_gen;
END_RCPP
}
// factorNoSort
IntegerVector factorNoSort(const CharacterVector& x, const CharacterVector& levels, const bool na_rm);
RcppExport SEXP _icd_factorNoSort(SEXP xSEXP, SEXP levelsSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type levels(levelsSEXP);
    Rcpp::traits::input_parameter< const bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(factorNoSort(x, levels, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// refactor
Rcpp::IntegerVector refactor(const IntegerVector& x, const CV& new_levels, bool exclude_na);
RcppExport SEXP _icd_refactor(SEXP xSEXP, SEXP new_levelsSEXP, SEXP exclude_naSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const CV& >::type new_levels(new_levelsSEXP);
    Rcpp::traits::input_parameter< bool >::type exclude_na(exclude_naSEXP);
    rcpp_result_gen = Rcpp::wrap(refactor(x, new_levels, exclude_na));
    return rcpp_result_gen;
END_RCPP
}
// refactor_narm
Rcpp::IntegerVector refactor_narm(const IntegerVector& x, const CV& new_levels);
RcppExport SEXP _icd_refactor_narm(SEXP xSEXP, SEXP new_levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const CV& >::type new_levels(new_levelsSEXP);
    rcpp_result_gen = Rcpp::wrap(refactor_narm(x, new_levels));
    return rcpp_result_gen;
END_RCPP
}
// trimLeftCpp
std::string trimLeftCpp(std::string s);
RcppExport SEXP _icd_trimLeftCpp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(trimLeftCpp(s));
    return rcpp_result_gen;
END_RCPP
}
// strimCpp
std::string strimCpp(std::string s);
RcppExport SEXP _icd_strimCpp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(strimCpp(s));
    return rcpp_result_gen;
END_RCPP
}
// trimCpp
VecStr trimCpp(VecStr sv);
RcppExport SEXP _icd_trimCpp(SEXP svSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< VecStr >::type sv(svSEXP);
    rcpp_result_gen = Rcpp::wrap(trimCpp(sv));
    return rcpp_result_gen;
END_RCPP
}
// icd9OrderCpp
std::vector<std::size_t> icd9OrderCpp(VecStr x);
RcppExport SEXP _icd_icd9OrderCpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< VecStr >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(icd9OrderCpp(x));
    return rcpp_result_gen;
END_RCPP
}
// matchFast
SEXP matchFast(SEXP x, SEXP table);
RcppExport SEXP _icd_matchFast(SEXP xSEXP, SEXP tableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    rcpp_result_gen = Rcpp::wrap(matchFast(x, table));
    return rcpp_result_gen;
END_RCPP
}
// inFast
SEXP inFast(SEXP x, SEXP table);
RcppExport SEXP _icd_inFast(SEXP xSEXP, SEXP tableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    rcpp_result_gen = Rcpp::wrap(inFast(x, table));
    return rcpp_result_gen;
END_RCPP
}
// valgrindCallgrindStart
int valgrindCallgrindStart(bool zerostats);
RcppExport SEXP _icd_valgrindCallgrindStart(SEXP zerostatsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type zerostats(zerostatsSEXP);
    rcpp_result_gen = Rcpp::wrap(valgrindCallgrindStart(zerostats));
    return rcpp_result_gen;
END_RCPP
}
// valgrindCallgrindStop
int valgrindCallgrindStop();
RcppExport SEXP _icd_valgrindCallgrindStop() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(valgrindCallgrindStop());
    return rcpp_result_gen;
END_RCPP
}
