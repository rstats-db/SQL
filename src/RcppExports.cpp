// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sqlParseVariablesImpl
List sqlParseVariablesImpl(std::string sql, ListOf<List> quotes, ListOf<List> comments);
RcppExport SEXP SQL_sqlParseVariablesImpl(SEXP sqlSEXP, SEXP quotesSEXP, SEXP commentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type quotes(quotesSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type comments(commentsSEXP);
    __result = Rcpp::wrap(sqlParseVariablesImpl(sql, quotes, comments));
    return __result;
END_RCPP
}
