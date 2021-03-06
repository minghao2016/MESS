// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>
using namespace Rcpp;

//' Fast computation of trace of matrix product
//'
//' @description Fast computation of the trace of the matrix product trace(t(A) %*% B)
//' @param A A matrix with dimensions n*k.
//' @param B A matrix with dimenions n*k.
//' @return The trace of the matrix product
//' @author Claus Ekstrom <claus@@rprimer.dk>
//' @export
// [[Rcpp::export]]
double tracemp(NumericMatrix A, NumericMatrix B) {

  arma::mat X(A.begin(), A.nrow(), A.ncol(), false);
  arma::mat Y(B.begin(), B.nrow(), B.ncol(), false);
  double res = arma::as_scalar(accu(X % Y));
    
  return res;
}

