// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cmd
double cmd(NumericMatrix x, NumericMatrix y);
RcppExport SEXP MESS_cmd(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    __result = Rcpp::wrap(cmd(x, y));
    return __result;
END_RCPP
}
// filldown
SEXP filldown(SEXP x);
RcppExport SEXP MESS_filldown(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(filldown(x));
    return __result;
END_RCPP
}
// mfastLm_cpp
DataFrame mfastLm_cpp(NumericVector y, NumericMatrix x, int addintercept);
RcppExport SEXP MESS_mfastLm_cpp(SEXP ySEXP, SEXP xSEXP, SEXP addinterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type addintercept(addinterceptSEXP);
    __result = Rcpp::wrap(mfastLm_cpp(y, x, addintercept));
    return __result;
END_RCPP
}
// qdiag
NumericVector qdiag(NumericMatrix x);
RcppExport SEXP MESS_qdiag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(qdiag(x));
    return __result;
END_RCPP
}
// quadform
NumericMatrix quadform(NumericMatrix x, NumericMatrix M, bool invertM, bool transposex);
RcppExport SEXP MESS_quadform(SEXP xSEXP, SEXP MSEXP, SEXP invertMSEXP, SEXP transposexSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type invertM(invertMSEXP);
    Rcpp::traits::input_parameter< bool >::type transposex(transposexSEXP);
    __result = Rcpp::wrap(quadform(x, M, invertM, transposex));
    return __result;
END_RCPP
}
// repmat
NumericMatrix repmat(NumericMatrix x, int nrow, int ncol);
RcppExport SEXP MESS_repmat(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    __result = Rcpp::wrap(repmat(x, nrow, ncol));
    return __result;
END_RCPP
}
// tracemp
double tracemp(NumericMatrix A, NumericMatrix B);
RcppExport SEXP MESS_tracemp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    __result = Rcpp::wrap(tracemp(A, B));
    return __result;
END_RCPP
}
