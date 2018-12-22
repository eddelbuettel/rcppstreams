// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppStreams.h"
#include <Rcpp.h>

using namespace Rcpp;

// commonSubexpressions
bool commonSubexpressions();
RcppExport SEXP _RcppStreams_commonSubexpressions() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(commonSubexpressions());
    return rcpp_result_gen;
END_RCPP
}
// helloStream
bool helloStream();
RcppExport SEXP _RcppStreams_helloStream() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(helloStream());
    return rcpp_result_gen;
END_RCPP
}
// crossAlert
bool crossAlert(int f1, int f2);
RcppExport SEXP _RcppStreams_crossAlert(SEXP f1SEXP, SEXP f2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type f1(f1SEXP);
    Rcpp::traits::input_parameter< int >::type f2(f2SEXP);
    rcpp_result_gen = Rcpp::wrap(crossAlert(f1, f2));
    return rcpp_result_gen;
END_RCPP
}
// slidingWindow
bool slidingWindow();
RcppExport SEXP _RcppStreams_slidingWindow() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(slidingWindow());
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP RcppStreams_commonSubexpressions();
RcppExport SEXP RcppStreams_crossAlert(SEXP, SEXP);
RcppExport SEXP RcppStreams_helloStream();
RcppExport SEXP RcppStreams_slidingWindow();

static const R_CallMethodDef CallEntries[] = {
    {"_RcppStreams_commonSubexpressions", (DL_FUNC) &_RcppStreams_commonSubexpressions, 0},
    {"_RcppStreams_helloStream", (DL_FUNC) &_RcppStreams_helloStream, 0},
    {"_RcppStreams_crossAlert", (DL_FUNC) &_RcppStreams_crossAlert, 2},
    {"_RcppStreams_slidingWindow", (DL_FUNC) &_RcppStreams_slidingWindow, 0},
    {"RcppStreams_commonSubexpressions", (DL_FUNC) &RcppStreams_commonSubexpressions, 0},
    {"RcppStreams_crossAlert",           (DL_FUNC) &RcppStreams_crossAlert,           2},
    {"RcppStreams_helloStream",          (DL_FUNC) &RcppStreams_helloStream,          0},
    {"RcppStreams_slidingWindow",        (DL_FUNC) &RcppStreams_slidingWindow,        0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppStreams(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
