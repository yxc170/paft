// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// gehan_ns
arma::vec gehan_ns(const arma::vec& b, const arma::mat& X, const arma::vec& Y, const arma::vec& d, const arma::vec& W);
RcppExport SEXP _paft_gehan_ns(SEXP bSEXP, SEXP XSEXP, SEXP YSEXP, SEXP dSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(gehan_ns(b, X, Y, d, W));
    return rcpp_result_gen;
END_RCPP
}
// gehan_s
arma::rowvec gehan_s(arma::vec b, arma::mat X, arma::vec y, arma::vec d, arma::vec w);
RcppExport SEXP _paft_gehan_s(SEXP bSEXP, SEXP XSEXP, SEXP ySEXP, SEXP dSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(gehan_s(b, X, y, d, w));
    return rcpp_result_gen;
END_RCPP
}
// pgeeCpp
Rcpp::List pgeeCpp(arma::mat X, arma::vec y, arma::vec weights, arma::vec id, double lambda, arma::vec b0, arma::vec pindex, std::string corstr, int maxit, double eps, double tol, bool SHEMonly, std::string penalty, arma::vec olsb);
RcppExport SEXP _paft_pgeeCpp(SEXP XSEXP, SEXP ySEXP, SEXP weightsSEXP, SEXP idSEXP, SEXP lambdaSEXP, SEXP b0SEXP, SEXP pindexSEXP, SEXP corstrSEXP, SEXP maxitSEXP, SEXP epsSEXP, SEXP tolSEXP, SEXP SHEMonlySEXP, SEXP penaltySEXP, SEXP olsbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pindex(pindexSEXP);
    Rcpp::traits::input_parameter< std::string >::type corstr(corstrSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type SHEMonly(SHEMonlySEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type olsb(olsbSEXP);
    rcpp_result_gen = Rcpp::wrap(pgeeCpp(X, y, weights, id, lambda, b0, pindex, corstr, maxit, eps, tol, SHEMonly, penalty, olsb));
    return rcpp_result_gen;
END_RCPP
}
// pgee
Rcpp::List pgee(arma::vec y, arma::mat X, arma::vec b0, arma::vec nt, arma::vec pindex, arma::vec w, std::string penalty, std::string corstr, double lambda, double eps, double tol, int maxit);
RcppExport SEXP _paft_pgee(SEXP ySEXP, SEXP XSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP pindexSEXP, SEXP wSEXP, SEXP penaltySEXP, SEXP corstrSEXP, SEXP lambdaSEXP, SEXP epsSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pindex(pindexSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< std::string >::type corstr(corstrSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(pgee(y, X, b0, nt, pindex, w, penalty, corstr, lambda, eps, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// gee
Rcpp::List gee(arma::vec y, arma::mat X, arma::vec b0, arma::vec nt, arma::vec w, std::string corstr, double tol, int maxit);
RcppExport SEXP _paft_gee(SEXP ySEXP, SEXP XSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP wSEXP, SEXP corstrSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type corstr(corstrSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(gee(y, X, b0, nt, w, corstr, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// eResC
arma::vec eResC(arma::vec const Time, arma::vec const censor, arma::vec const wgt);
RcppExport SEXP _paft_eResC(SEXP TimeSEXP, SEXP censorSEXP, SEXP wgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec const >::type Time(TimeSEXP);
    Rcpp::traits::input_parameter< arma::vec const >::type censor(censorSEXP);
    Rcpp::traits::input_parameter< arma::vec const >::type wgt(wgtSEXP);
    rcpp_result_gen = Rcpp::wrap(eResC(Time, censor, wgt));
    return rcpp_result_gen;
END_RCPP
}
// aftgeeEst
Rcpp::List aftgeeEst(arma::vec y, arma::mat X, arma::vec D, arma::vec b0, arma::vec nt, arma::vec w, std::string corstr, double tol, int maxit);
RcppExport SEXP _paft_aftgeeEst(SEXP ySEXP, SEXP XSEXP, SEXP DSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP wSEXP, SEXP corstrSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type corstr(corstrSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(aftgeeEst(y, X, D, b0, nt, w, corstr, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// paftgeeEst
Rcpp::List paftgeeEst(arma::vec y, arma::mat X, arma::vec D, arma::vec b0, arma::vec nt, arma::vec pindex, arma::vec w, std::string penalty, std::string corstr, double lambda, double eps, double tol, int maxit);
RcppExport SEXP _paft_paftgeeEst(SEXP ySEXP, SEXP XSEXP, SEXP DSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP pindexSEXP, SEXP wSEXP, SEXP penaltySEXP, SEXP corstrSEXP, SEXP lambdaSEXP, SEXP epsSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pindex(pindexSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< std::string >::type corstr(corstrSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(paftgeeEst(y, X, D, b0, nt, pindex, w, penalty, corstr, lambda, eps, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// paftgeeCV
Rcpp::List paftgeeCV(arma::vec y, arma::mat X, arma::vec D, arma::vec b0, arma::vec nt, arma::vec pindex, arma::vec w, std::string penalty, int nCV, arma::vec lambda, bool CVprop, double eps, double tol, int maxit);
RcppExport SEXP _paft_paftgeeCV(SEXP ySEXP, SEXP XSEXP, SEXP DSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP pindexSEXP, SEXP wSEXP, SEXP penaltySEXP, SEXP nCVSEXP, SEXP lambdaSEXP, SEXP CVpropSEXP, SEXP epsSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pindex(pindexSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type nCV(nCVSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type CVprop(CVpropSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(paftgeeCV(y, X, D, b0, nt, pindex, w, penalty, nCV, lambda, CVprop, eps, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// paftgeeBIC
arma::vec paftgeeBIC(arma::vec y, arma::mat X, arma::vec D, arma::vec b0, arma::vec nt, arma::vec pindex, arma::vec w, std::string penalty, arma::vec lambda, double eps, double tol, int maxit);
RcppExport SEXP _paft_paftgeeBIC(SEXP ySEXP, SEXP XSEXP, SEXP DSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP pindexSEXP, SEXP wSEXP, SEXP penaltySEXP, SEXP lambdaSEXP, SEXP epsSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pindex(pindexSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(paftgeeBIC(y, X, D, b0, nt, pindex, w, penalty, lambda, eps, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}
// paftgeeEst1
Rcpp::List paftgeeEst1(arma::vec y, arma::mat X, arma::vec D, arma::vec b0, arma::vec nt, arma::vec pindex, arma::vec w, std::string penalty, int nCV, std::string corstr, arma::vec lambda, bool CVprop, std::string rule, double eps, double tol, int maxit);
RcppExport SEXP _paft_paftgeeEst1(SEXP ySEXP, SEXP XSEXP, SEXP DSEXP, SEXP b0SEXP, SEXP ntSEXP, SEXP pindexSEXP, SEXP wSEXP, SEXP penaltySEXP, SEXP nCVSEXP, SEXP corstrSEXP, SEXP lambdaSEXP, SEXP CVpropSEXP, SEXP ruleSEXP, SEXP epsSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nt(ntSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pindex(pindexSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type nCV(nCVSEXP);
    Rcpp::traits::input_parameter< std::string >::type corstr(corstrSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type CVprop(CVpropSEXP);
    Rcpp::traits::input_parameter< std::string >::type rule(ruleSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(paftgeeEst1(y, X, D, b0, nt, pindex, w, penalty, nCV, corstr, lambda, CVprop, rule, eps, tol, maxit));
    return rcpp_result_gen;
END_RCPP
}

// static const R_CallMethodDef CallEntries[] = {
//     {"_paft_gehan_ns", (DL_FUNC) &_paft_gehan_ns, 5},
//     {"_paft_gehan_s", (DL_FUNC) &_paft_gehan_s, 5},
//     {"_paft_pgeeCpp", (DL_FUNC) &_paft_pgeeCpp, 14},
//     {"_paft_pgee", (DL_FUNC) &_paft_pgee, 12},
//     {"_paft_gee", (DL_FUNC) &_paft_gee, 8},
//     {"_paft_eResC", (DL_FUNC) &_paft_eResC, 3},
//     {"_paft_aftgeeEst", (DL_FUNC) &_paft_aftgeeEst, 9},
//     {"_paft_paftgeeEst", (DL_FUNC) &_paft_paftgeeEst, 13},
//     {"_paft_paftgeeCV", (DL_FUNC) &_paft_paftgeeCV, 14},
//     {"_paft_paftgeeBIC", (DL_FUNC) &_paft_paftgeeBIC, 12},
//     {"_paft_paftgeeEst1", (DL_FUNC) &_paft_paftgeeEst1, 16},
//     {NULL, NULL, 0}
// };
//
// RcppExport void R_init_paft(DllInfo *dll) {
//     R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
//     R_useDynamicSymbols(dll, FALSE);
// }
