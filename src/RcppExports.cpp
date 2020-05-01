// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// FitLLNegBin
NumericVector FitLLNegBin(const NumericVector& y_m, const NumericVector& y_d, const double& r);
RcppExport SEXP _hivModelling_FitLLNegBin(SEXP y_mSEXP, SEXP y_dSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type y_m(y_mSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_d(y_dSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(FitLLNegBin(y_m, y_d, r));
    return rcpp_result_gen;
END_RCPP
}
// FitLLPoisson
NumericVector FitLLPoisson(const NumericVector& y_m, const NumericVector& y_d);
RcppExport SEXP _hivModelling_FitLLPoisson(SEXP y_mSEXP, SEXP y_dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type y_m(y_mSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_d(y_dSEXP);
    rcpp_result_gen = Rcpp::wrap(FitLLPoisson(y_m, y_d));
    return rcpp_result_gen;
END_RCPP
}
// GetInterval2
size_t GetInterval2(const double& time, const size_t& modelSplineN, const NumericVector& myKnots, const NumericVector& diffMyKnots);
RcppExport SEXP _hivModelling_GetInterval2(SEXP timeSEXP, SEXP modelSplineNSEXP, SEXP myKnotsSEXP, SEXP diffMyKnotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type modelSplineN(modelSplineNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type myKnots(myKnotsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type diffMyKnots(diffMyKnotsSEXP);
    rcpp_result_gen = Rcpp::wrap(GetInterval2(time, modelSplineN, myKnots, diffMyKnots));
    return rcpp_result_gen;
END_RCPP
}
// GetInterval1
size_t GetInterval1(const double& time, const size_t& modelSplineN, const NumericVector& myKnots);
RcppExport SEXP _hivModelling_GetInterval1(SEXP timeSEXP, SEXP modelSplineNSEXP, SEXP myKnotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type modelSplineN(modelSplineNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type myKnots(myKnotsSEXP);
    rcpp_result_gen = Rcpp::wrap(GetInterval1(time, modelSplineN, myKnots));
    return rcpp_result_gen;
END_RCPP
}
// GetBSpline
double GetBSpline(const double& time, const NumericVector& theta, const size_t& kOrder, const size_t& modelSplineN, const NumericVector& myKnots, const double& minYear, const double& maxYear);
RcppExport SEXP _hivModelling_GetBSpline(SEXP timeSEXP, SEXP thetaSEXP, SEXP kOrderSEXP, SEXP modelSplineNSEXP, SEXP myKnotsSEXP, SEXP minYearSEXP, SEXP maxYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type kOrder(kOrderSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type modelSplineN(modelSplineNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type myKnots(myKnotsSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    rcpp_result_gen = Rcpp::wrap(GetBSpline(time, theta, kOrder, modelSplineN, myKnots, minYear, maxYear));
    return rcpp_result_gen;
END_RCPP
}
// GetTimeInterval_std
size_t GetTimeInterval_std(const double& time, const NumericVector& timeIntervals);
RcppExport SEXP _hivModelling_GetTimeInterval_std(SEXP timeSEXP, SEXP timeIntervalsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type timeIntervals(timeIntervalsSEXP);
    rcpp_result_gen = Rcpp::wrap(GetTimeInterval_std(time, timeIntervals));
    return rcpp_result_gen;
END_RCPP
}
// GetTimeInterval
size_t GetTimeInterval(const double& x, const NumericVector& tc);
RcppExport SEXP _hivModelling_GetTimeInterval(SEXP xSEXP, SEXP tcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type tc(tcSEXP);
    rcpp_result_gen = Rcpp::wrap(GetTimeInterval(x, tc));
    return rcpp_result_gen;
END_RCPP
}
// GetDelta
NumericVector GetDelta(const double& time, const double& delta4Fac, const NumericMatrix& deltaM, const NumericVector& tc, const size_t& deadStageIdx);
RcppExport SEXP _hivModelling_GetDelta(SEXP timeSEXP, SEXP delta4FacSEXP, SEXP deltaMSEXP, SEXP tcSEXP, SEXP deadStageIdxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const double& >::type delta4Fac(delta4FacSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type deltaM(deltaMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type tc(tcSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type deadStageIdx(deadStageIdxSEXP);
    rcpp_result_gen = Rcpp::wrap(GetDelta(time, delta4Fac, deltaM, tc, deadStageIdx));
    return rcpp_result_gen;
END_RCPP
}
// CountModel
NumericVector CountModel(const double& x, const NumericVector& y, const double& lambda, const size_t& nVar, const NumericVector& qoppa, const NumericVector& fInit, const double& alphaP, const double& mu, const size_t& noStage, const double& delta4Fac, const NumericMatrix& deltaM, const NumericVector& tc, NumericVector& dydx);
RcppExport SEXP _hivModelling_CountModel(SEXP xSEXP, SEXP ySEXP, SEXP lambdaSEXP, SEXP nVarSEXP, SEXP qoppaSEXP, SEXP fInitSEXP, SEXP alphaPSEXP, SEXP muSEXP, SEXP noStageSEXP, SEXP delta4FacSEXP, SEXP deltaMSEXP, SEXP tcSEXP, SEXP dydxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type qoppa(qoppaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type fInit(fInitSEXP);
    Rcpp::traits::input_parameter< const double& >::type alphaP(alphaPSEXP);
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type noStage(noStageSEXP);
    Rcpp::traits::input_parameter< const double& >::type delta4Fac(delta4FacSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type deltaM(deltaMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type tc(tcSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type dydx(dydxSEXP);
    rcpp_result_gen = Rcpp::wrap(CountModel(x, y, lambda, nVar, qoppa, fInit, alphaP, mu, noStage, delta4Fac, deltaM, tc, dydx));
    return rcpp_result_gen;
END_RCPP
}
// TimeModel
NumericVector TimeModel(const double& x, const NumericVector& y, const List& param, const double& year, NumericVector& dydx);
RcppExport SEXP _hivModelling_TimeModel(SEXP xSEXP, SEXP ySEXP, SEXP paramSEXP, SEXP yearSEXP, SEXP dydxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const double& >::type year(yearSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type dydx(dydxSEXP);
    rcpp_result_gen = Rcpp::wrap(TimeModel(x, y, param, year, dydx));
    return rcpp_result_gen;
END_RCPP
}
// Sign
double Sign(double a, double b);
RcppExport SEXP _hivModelling_Sign(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(Sign(a, b));
    return rcpp_result_gen;
END_RCPP
}
// Swap1D
void Swap1D(Rcpp::NumericVector& y, const int a, const int b);
RcppExport SEXP _hivModelling_Swap1D(SEXP ySEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Swap1D(y, a, b);
    return R_NilValue;
END_RCPP
}
// Swap2D
void Swap2D(Rcpp::NumericMatrix& y, const int a1, const int a2, const int b1, const int b2);
RcppExport SEXP _hivModelling_Swap2D(SEXP ySEXP, SEXP a1SEXP, SEXP a2SEXP, SEXP b1SEXP, SEXP b2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< const int >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< const int >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< const int >::type b2(b2SEXP);
    Swap2D(y, a1, a2, b1, b2);
    return R_NilValue;
END_RCPP
}
// odeint_count
double odeint_count(NumericVector& ystart, const size_t& nVar, const double& x1, const double& x2, const List& param, const List& info, const double& minYear, const double& maxYear);
RcppExport SEXP _hivModelling_odeint_count(SEXP ystartSEXP, SEXP nVarSEXP, SEXP x1SEXP, SEXP x2SEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type ystart(ystartSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const double& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    rcpp_result_gen = Rcpp::wrap(odeint_count(ystart, nVar, x1, x2, param, info, minYear, maxYear));
    return rcpp_result_gen;
END_RCPP
}
// odeint_time
void odeint_time(NumericVector& ystart, const size_t& nVar, const double& x1, const double& x2, const List& param, const List& info, const double& minYear, const double& maxYear, const double tmpYear);
RcppExport SEXP _hivModelling_odeint_time(SEXP ystartSEXP, SEXP nVarSEXP, SEXP x1SEXP, SEXP x2SEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP, SEXP tmpYearSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type ystart(ystartSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const double& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    Rcpp::traits::input_parameter< const double >::type tmpYear(tmpYearSEXP);
    odeint_time(ystart, nVar, x1, x2, param, info, minYear, maxYear, tmpYear);
    return R_NilValue;
END_RCPP
}
// odeintReturn_count
NumericVector odeintReturn_count(NumericVector& ystart, const size_t& nVar, const double& x1, const double& x2, const List& param, const List& info, const double& minYear, const double& maxYear);
RcppExport SEXP _hivModelling_odeintReturn_count(SEXP ystartSEXP, SEXP nVarSEXP, SEXP x1SEXP, SEXP x2SEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type ystart(ystartSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const double& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    rcpp_result_gen = Rcpp::wrap(odeintReturn_count(ystart, nVar, x1, x2, param, info, minYear, maxYear));
    return rcpp_result_gen;
END_RCPP
}
// odeintReturn_time
NumericVector odeintReturn_time(NumericVector& ystart, const size_t& nVar, const double& x1, const double& x2, const List& param, const List& info, const double& minYear, const double& maxYear, const double tmpYear);
RcppExport SEXP _hivModelling_odeintReturn_time(SEXP ystartSEXP, SEXP nVarSEXP, SEXP x1SEXP, SEXP x2SEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP, SEXP tmpYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type ystart(ystartSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const double& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    Rcpp::traits::input_parameter< const double >::type tmpYear(tmpYearSEXP);
    rcpp_result_gen = Rcpp::wrap(odeintReturn_time(ystart, nVar, x1, x2, param, info, minYear, maxYear, tmpYear));
    return rcpp_result_gen;
END_RCPP
}
// odeintLoop
List odeintLoop(const NumericVector& modelYears, const List& param, const List& info);
RcppExport SEXP _hivModelling_odeintLoop(SEXP modelYearsSEXP, SEXP paramSEXP, SEXP infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type modelYears(modelYearsSEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    rcpp_result_gen = Rcpp::wrap(odeintLoop(modelYears, param, info));
    return rcpp_result_gen;
END_RCPP
}
// rkck_count
void rkck_count(const double& x, const NumericVector& y, const NumericVector& dydx, const size_t& nVar, const double& h, const List& param, const List& info, const double& minYear, const double& maxYear, List& result);
RcppExport SEXP _hivModelling_rkck_count(SEXP xSEXP, SEXP ySEXP, SEXP dydxSEXP, SEXP nVarSEXP, SEXP hSEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP, SEXP resultSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dydx(dydxSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    Rcpp::traits::input_parameter< List& >::type result(resultSEXP);
    rkck_count(x, y, dydx, nVar, h, param, info, minYear, maxYear, result);
    return R_NilValue;
END_RCPP
}
// rkck_time
void rkck_time(const double& x, const NumericVector& y, const NumericVector& dydx, const size_t& nVar, const double& h, const List& param, const List& info, const double& minYear, const double& maxYear, const double& tmpYear, List& result);
RcppExport SEXP _hivModelling_rkck_time(SEXP xSEXP, SEXP ySEXP, SEXP dydxSEXP, SEXP nVarSEXP, SEXP hSEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP, SEXP tmpYearSEXP, SEXP resultSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dydx(dydxSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type tmpYear(tmpYearSEXP);
    Rcpp::traits::input_parameter< List& >::type result(resultSEXP);
    rkck_time(x, y, dydx, nVar, h, param, info, minYear, maxYear, tmpYear, result);
    return R_NilValue;
END_RCPP
}
// rkqs_count
void rkqs_count(double& x, NumericVector& y, const NumericVector& dydx, const size_t& nVar, const double& htry, const double& eps, const NumericVector& yscal, const List& param, const List& info, const double& minYear, const double& maxYear, List& rkqsRes, List& rkckRes);
RcppExport SEXP _hivModelling_rkqs_count(SEXP xSEXP, SEXP ySEXP, SEXP dydxSEXP, SEXP nVarSEXP, SEXP htrySEXP, SEXP epsSEXP, SEXP yscalSEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP, SEXP rkqsResSEXP, SEXP rkckResSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dydx(dydxSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type htry(htrySEXP);
    Rcpp::traits::input_parameter< const double& >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type yscal(yscalSEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    Rcpp::traits::input_parameter< List& >::type rkqsRes(rkqsResSEXP);
    Rcpp::traits::input_parameter< List& >::type rkckRes(rkckResSEXP);
    rkqs_count(x, y, dydx, nVar, htry, eps, yscal, param, info, minYear, maxYear, rkqsRes, rkckRes);
    return R_NilValue;
END_RCPP
}
// rkqs_time
void rkqs_time(double& x, NumericVector& y, const NumericVector& dydx, const size_t& nVar, const double& htry, const double& eps, const NumericVector& yscal, const List& param, const List& info, const double& minYear, const double& maxYear, const double& tmpYear, List& rkqsRes, List& rkckRes);
RcppExport SEXP _hivModelling_rkqs_time(SEXP xSEXP, SEXP ySEXP, SEXP dydxSEXP, SEXP nVarSEXP, SEXP htrySEXP, SEXP epsSEXP, SEXP yscalSEXP, SEXP paramSEXP, SEXP infoSEXP, SEXP minYearSEXP, SEXP maxYearSEXP, SEXP tmpYearSEXP, SEXP rkqsResSEXP, SEXP rkckResSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dydx(dydxSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< const double& >::type htry(htrySEXP);
    Rcpp::traits::input_parameter< const double& >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type yscal(yscalSEXP);
    Rcpp::traits::input_parameter< const List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List& >::type info(infoSEXP);
    Rcpp::traits::input_parameter< const double& >::type minYear(minYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type maxYear(maxYearSEXP);
    Rcpp::traits::input_parameter< const double& >::type tmpYear(tmpYearSEXP);
    Rcpp::traits::input_parameter< List& >::type rkqsRes(rkqsResSEXP);
    Rcpp::traits::input_parameter< List& >::type rkckRes(rkckResSEXP);
    rkqs_time(x, y, dydx, nVar, htry, eps, yscal, param, info, minYear, maxYear, tmpYear, rkqsRes, rkckRes);
    return R_NilValue;
END_RCPP
}
// zbrent
double zbrent(Function func, double x1, double x2, double tol, List extraArgs);
RcppExport SEXP _hivModelling_zbrent(SEXP funcSEXP, SEXP x1SEXP, SEXP x2SEXP, SEXP tolSEXP, SEXP extraArgsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type func(funcSEXP);
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< List >::type extraArgs(extraArgsSEXP);
    rcpp_result_gen = Rcpp::wrap(zbrent(func, x1, x2, tol, extraArgs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hivModelling_FitLLNegBin", (DL_FUNC) &_hivModelling_FitLLNegBin, 3},
    {"_hivModelling_FitLLPoisson", (DL_FUNC) &_hivModelling_FitLLPoisson, 2},
    {"_hivModelling_GetInterval2", (DL_FUNC) &_hivModelling_GetInterval2, 4},
    {"_hivModelling_GetInterval1", (DL_FUNC) &_hivModelling_GetInterval1, 3},
    {"_hivModelling_GetBSpline", (DL_FUNC) &_hivModelling_GetBSpline, 7},
    {"_hivModelling_GetTimeInterval_std", (DL_FUNC) &_hivModelling_GetTimeInterval_std, 2},
    {"_hivModelling_GetTimeInterval", (DL_FUNC) &_hivModelling_GetTimeInterval, 2},
    {"_hivModelling_GetDelta", (DL_FUNC) &_hivModelling_GetDelta, 5},
    {"_hivModelling_CountModel", (DL_FUNC) &_hivModelling_CountModel, 13},
    {"_hivModelling_TimeModel", (DL_FUNC) &_hivModelling_TimeModel, 5},
    {"_hivModelling_Sign", (DL_FUNC) &_hivModelling_Sign, 2},
    {"_hivModelling_Swap1D", (DL_FUNC) &_hivModelling_Swap1D, 3},
    {"_hivModelling_Swap2D", (DL_FUNC) &_hivModelling_Swap2D, 5},
    {"_hivModelling_odeint_count", (DL_FUNC) &_hivModelling_odeint_count, 8},
    {"_hivModelling_odeint_time", (DL_FUNC) &_hivModelling_odeint_time, 9},
    {"_hivModelling_odeintReturn_count", (DL_FUNC) &_hivModelling_odeintReturn_count, 8},
    {"_hivModelling_odeintReturn_time", (DL_FUNC) &_hivModelling_odeintReturn_time, 9},
    {"_hivModelling_odeintLoop", (DL_FUNC) &_hivModelling_odeintLoop, 3},
    {"_hivModelling_rkck_count", (DL_FUNC) &_hivModelling_rkck_count, 10},
    {"_hivModelling_rkck_time", (DL_FUNC) &_hivModelling_rkck_time, 11},
    {"_hivModelling_rkqs_count", (DL_FUNC) &_hivModelling_rkqs_count, 13},
    {"_hivModelling_rkqs_time", (DL_FUNC) &_hivModelling_rkqs_time, 14},
    {"_hivModelling_zbrent", (DL_FUNC) &_hivModelling_zbrent, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_hivModelling(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
