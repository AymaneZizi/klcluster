// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// segment_wise_coords
NumericMatrix segment_wise_coords(NumericMatrix center, NumericMatrix path, double eps);
RcppExport SEXP _klcluster_segment_wise_coords(SEXP centerSEXP, SEXP pathSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type center(centerSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type path(pathSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(segment_wise_coords(center, path, eps));
    return rcpp_result_gen;
END_RCPP
}
// center_disk
NumericVector center_disk(NumericVector p1, NumericVector p2, NumericVector p3);
RcppExport SEXP _klcluster_center_disk(SEXP p1SEXP, SEXP p2SEXP, SEXP p3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p3(p3SEXP);
    rcpp_result_gen = Rcpp::wrap(center_disk(p1, p2, p3));
    return rcpp_result_gen;
END_RCPP
}
// sed_randomized
NumericVector sed_randomized(NumericMatrix points);
RcppExport SEXP _klcluster_sed_randomized(SEXP pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(sed_randomized(points));
    return rcpp_result_gen;
END_RCPP
}
// sed
NumericVector sed(NumericMatrix points);
RcppExport SEXP _klcluster_sed(SEXP pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(sed(points));
    return rcpp_result_gen;
END_RCPP
}
// count_sed
List count_sed(NumericMatrix points, int times);
RcppExport SEXP _klcluster_count_sed(SEXP pointsSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(count_sed(points, times));
    return rcpp_result_gen;
END_RCPP
}
// count_sed_random
List count_sed_random(NumericMatrix points, int times);
RcppExport SEXP _klcluster_count_sed_random(SEXP pointsSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(count_sed_random(points, times));
    return rcpp_result_gen;
END_RCPP
}
// get_free_interval_c
NumericVector get_free_interval_c(NumericVector avec, NumericVector uvec, NumericVector vvec, double eps);
RcppExport SEXP _klcluster_get_free_interval_c(SEXP avecSEXP, SEXP uvecSEXP, SEXP vvecSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type avec(avecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type uvec(uvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vvec(vvecSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_free_interval_c(avec, uvec, vvec, eps));
    return rcpp_result_gen;
END_RCPP
}
// use_interval_c
bool use_interval_c(NumericMatrix p1, NumericMatrix p2, double eps);
RcppExport SEXP _klcluster_use_interval_c(SEXP p1SEXP, SEXP p2SEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(use_interval_c(p1, p2, eps));
    return rcpp_result_gen;
END_RCPP
}
// check_eps_c
bool check_eps_c(NumericMatrix p1_mat, NumericMatrix p2_mat, double eps);
RcppExport SEXP _klcluster_check_eps_c(SEXP p1_matSEXP, SEXP p2_matSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p1_mat(p1_matSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2_mat(p2_matSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(check_eps_c(p1_mat, p2_mat, eps));
    return rcpp_result_gen;
END_RCPP
}
// get_frechet_c
double get_frechet_c(NumericMatrix p1_mat, NumericMatrix p2_mat, double precision);
RcppExport SEXP _klcluster_get_frechet_c(SEXP p1_matSEXP, SEXP p2_matSEXP, SEXP precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p1_mat(p1_matSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2_mat(p2_matSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(get_frechet_c(p1_mat, p2_mat, precision));
    return rcpp_result_gen;
END_RCPP
}
// dtw
NumericMatrix dtw(NumericMatrix p1, NumericMatrix p2, bool sqr_dist);
RcppExport SEXP _klcluster_dtw(SEXP p1SEXP, SEXP p2SEXP, SEXP sqr_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< bool >::type sqr_dist(sqr_distSEXP);
    rcpp_result_gen = Rcpp::wrap(dtw(p1, p2, sqr_dist));
    return rcpp_result_gen;
END_RCPP
}
// calc_ca
double calc_ca(NumericMatrix ca, int i, int j, NumericMatrix p1, NumericMatrix p2);
RcppExport SEXP _klcluster_calc_ca(SEXP caSEXP, SEXP iSEXP, SEXP jSEXP, SEXP p1SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ca(caSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2(p2SEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ca(ca, i, j, p1, p2));
    return rcpp_result_gen;
END_RCPP
}
// get_interval_c
NumericVector get_interval_c();
RcppExport SEXP _klcluster_get_interval_c() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_interval_c());
    return rcpp_result_gen;
END_RCPP
}
// is_empty_c
bool is_empty_c(NumericMatrix xmin, NumericMatrix xmax, int row, int col);
RcppExport SEXP _klcluster_is_empty_c(SEXP xminSEXP, SEXP xmaxSEXP, SEXP rowSEXP, SEXP colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    rcpp_result_gen = Rcpp::wrap(is_empty_c(xmin, xmax, row, col));
    return rcpp_result_gen;
END_RCPP
}
// dist_matrix
NumericMatrix dist_matrix(NumericMatrix p1, NumericMatrix p2);
RcppExport SEXP _klcluster_dist_matrix(SEXP p1SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2(p2SEXP);
    rcpp_result_gen = Rcpp::wrap(dist_matrix(p1, p2));
    return rcpp_result_gen;
END_RCPP
}
// get_coord
NumericVector get_coord(NumericVector point1, NumericVector point2, double dist);
RcppExport SEXP _klcluster_get_coord(SEXP point1SEXP, SEXP point2SEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type point1(point1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type point2(point2SEXP);
    Rcpp::traits::input_parameter< double >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(get_coord(point1, point2, dist));
    return rcpp_result_gen;
END_RCPP
}
// backtrack
NumericMatrix backtrack(NumericMatrix center, NumericMatrix path, NumericMatrix dist_mat);
RcppExport SEXP _klcluster_backtrack(SEXP centerSEXP, SEXP pathSEXP, SEXP dist_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type center(centerSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type path(pathSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_mat(dist_matSEXP);
    rcpp_result_gen = Rcpp::wrap(backtrack(center, path, dist_mat));
    return rcpp_result_gen;
END_RCPP
}
// index_shuffle
IntegerVector index_shuffle(int start, int n);
RcppExport SEXP _klcluster_index_shuffle(SEXP startSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(index_shuffle(start, n));
    return rcpp_result_gen;
END_RCPP
}
// dist_c
double dist_c(double ax, double ay, double bx, double by);
RcppExport SEXP _klcluster_dist_c(SEXP axSEXP, SEXP aySEXP, SEXP bxSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ax(axSEXP);
    Rcpp::traits::input_parameter< double >::type ay(aySEXP);
    Rcpp::traits::input_parameter< double >::type bx(bxSEXP);
    Rcpp::traits::input_parameter< double >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(dist_c(ax, ay, bx, by));
    return rcpp_result_gen;
END_RCPP
}
// squared_dist
double squared_dist(double ax, double ay, double bx, double by);
RcppExport SEXP _klcluster_squared_dist(SEXP axSEXP, SEXP aySEXP, SEXP bxSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ax(axSEXP);
    Rcpp::traits::input_parameter< double >::type ay(aySEXP);
    Rcpp::traits::input_parameter< double >::type bx(bxSEXP);
    Rcpp::traits::input_parameter< double >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(squared_dist(ax, ay, bx, by));
    return rcpp_result_gen;
END_RCPP
}
// calc_dot
double calc_dot(double ax, double ay, double bx, double by);
RcppExport SEXP _klcluster_calc_dot(SEXP axSEXP, SEXP aySEXP, SEXP bxSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ax(axSEXP);
    Rcpp::traits::input_parameter< double >::type ay(aySEXP);
    Rcpp::traits::input_parameter< double >::type bx(bxSEXP);
    Rcpp::traits::input_parameter< double >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(calc_dot(ax, ay, bx, by));
    return rcpp_result_gen;
END_RCPP
}
// coord_wise_mean
NumericVector coord_wise_mean(NumericMatrix coords, double nr_coords);
RcppExport SEXP _klcluster_coord_wise_mean(SEXP coordsSEXP, SEXP nr_coordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< double >::type nr_coords(nr_coordsSEXP);
    rcpp_result_gen = Rcpp::wrap(coord_wise_mean(coords, nr_coords));
    return rcpp_result_gen;
END_RCPP
}
// calc_dist_c
NumericVector calc_dist_c(NumericMatrix a, NumericMatrix b);
RcppExport SEXP _klcluster_calc_dist_c(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_dist_c(a, b));
    return rcpp_result_gen;
END_RCPP
}
// subtract_xy_c
NumericVector subtract_xy_c(NumericVector u, NumericVector v);
RcppExport SEXP _klcluster_subtract_xy_c(SEXP uSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(subtract_xy_c(u, v));
    return rcpp_result_gen;
END_RCPP
}
// dot_product_c
NumericVector dot_product_c(NumericMatrix a, NumericMatrix b);
RcppExport SEXP _klcluster_dot_product_c(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(dot_product_c(a, b));
    return rcpp_result_gen;
END_RCPP
}
// dist_point_to_line_c
double dist_point_to_line_c(NumericVector a, NumericVector u, NumericVector v);
RcppExport SEXP _klcluster_dist_point_to_line_c(SEXP aSEXP, SEXP uSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_point_to_line_c(a, u, v));
    return rcpp_result_gen;
END_RCPP
}
// which_min
int which_min(NumericVector x);
RcppExport SEXP _klcluster_which_min(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(which_min(x));
    return rcpp_result_gen;
END_RCPP
}
// subset_vec
NumericVector subset_vec(NumericVector x, IntegerVector index);
RcppExport SEXP _klcluster_subset_vec(SEXP xSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_vec(x, index));
    return rcpp_result_gen;
END_RCPP
}
// get_max
double get_max(NumericVector x);
RcppExport SEXP _klcluster_get_max(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_max(x));
    return rcpp_result_gen;
END_RCPP
}
// get_min
double get_min(NumericVector x);
RcppExport SEXP _klcluster_get_min(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_min(x));
    return rcpp_result_gen;
END_RCPP
}
// get_max2
double get_max2(double x, double y);
RcppExport SEXP _klcluster_get_max2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(get_max2(x, y));
    return rcpp_result_gen;
END_RCPP
}
// get_min2
double get_min2(double x, double y);
RcppExport SEXP _klcluster_get_min2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(get_min2(x, y));
    return rcpp_result_gen;
END_RCPP
}
// df1_to_nv
NumericVector df1_to_nv(DataFrame df);
RcppExport SEXP _klcluster_df1_to_nv(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(df1_to_nv(df));
    return rcpp_result_gen;
END_RCPP
}
// df_to_mat
NumericMatrix df_to_mat(DataFrame x);
RcppExport SEXP _klcluster_df_to_mat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(df_to_mat(x));
    return rcpp_result_gen;
END_RCPP
}
// mat_to_df
DataFrame mat_to_df(NumericMatrix mat, bool path);
RcppExport SEXP _klcluster_mat_to_df(SEXP matSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(mat_to_df(mat, path));
    return rcpp_result_gen;
END_RCPP
}
// concat_vec
NumericVector concat_vec(NumericVector vec1, NumericVector vec2);
RcppExport SEXP _klcluster_concat_vec(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(concat_vec(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// subset_mat
NumericMatrix subset_mat(NumericMatrix mat, NumericVector index);
RcppExport SEXP _klcluster_subset_mat(SEXP matSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_mat(mat, index));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_klcluster_segment_wise_coords", (DL_FUNC) &_klcluster_segment_wise_coords, 3},
    {"_klcluster_center_disk", (DL_FUNC) &_klcluster_center_disk, 3},
    {"_klcluster_sed_randomized", (DL_FUNC) &_klcluster_sed_randomized, 1},
    {"_klcluster_sed", (DL_FUNC) &_klcluster_sed, 1},
    {"_klcluster_count_sed", (DL_FUNC) &_klcluster_count_sed, 2},
    {"_klcluster_count_sed_random", (DL_FUNC) &_klcluster_count_sed_random, 2},
    {"_klcluster_get_free_interval_c", (DL_FUNC) &_klcluster_get_free_interval_c, 4},
    {"_klcluster_use_interval_c", (DL_FUNC) &_klcluster_use_interval_c, 3},
    {"_klcluster_check_eps_c", (DL_FUNC) &_klcluster_check_eps_c, 3},
    {"_klcluster_get_frechet_c", (DL_FUNC) &_klcluster_get_frechet_c, 3},
    {"_klcluster_dtw", (DL_FUNC) &_klcluster_dtw, 3},
    {"_klcluster_calc_ca", (DL_FUNC) &_klcluster_calc_ca, 5},
    {"_klcluster_get_interval_c", (DL_FUNC) &_klcluster_get_interval_c, 0},
    {"_klcluster_is_empty_c", (DL_FUNC) &_klcluster_is_empty_c, 4},
    {"_klcluster_dist_matrix", (DL_FUNC) &_klcluster_dist_matrix, 2},
    {"_klcluster_get_coord", (DL_FUNC) &_klcluster_get_coord, 3},
    {"_klcluster_backtrack", (DL_FUNC) &_klcluster_backtrack, 3},
    {"_klcluster_index_shuffle", (DL_FUNC) &_klcluster_index_shuffle, 2},
    {"_klcluster_dist_c", (DL_FUNC) &_klcluster_dist_c, 4},
    {"_klcluster_squared_dist", (DL_FUNC) &_klcluster_squared_dist, 4},
    {"_klcluster_calc_dot", (DL_FUNC) &_klcluster_calc_dot, 4},
    {"_klcluster_coord_wise_mean", (DL_FUNC) &_klcluster_coord_wise_mean, 2},
    {"_klcluster_calc_dist_c", (DL_FUNC) &_klcluster_calc_dist_c, 2},
    {"_klcluster_subtract_xy_c", (DL_FUNC) &_klcluster_subtract_xy_c, 2},
    {"_klcluster_dot_product_c", (DL_FUNC) &_klcluster_dot_product_c, 2},
    {"_klcluster_dist_point_to_line_c", (DL_FUNC) &_klcluster_dist_point_to_line_c, 3},
    {"_klcluster_which_min", (DL_FUNC) &_klcluster_which_min, 1},
    {"_klcluster_subset_vec", (DL_FUNC) &_klcluster_subset_vec, 2},
    {"_klcluster_get_max", (DL_FUNC) &_klcluster_get_max, 1},
    {"_klcluster_get_min", (DL_FUNC) &_klcluster_get_min, 1},
    {"_klcluster_get_max2", (DL_FUNC) &_klcluster_get_max2, 2},
    {"_klcluster_get_min2", (DL_FUNC) &_klcluster_get_min2, 2},
    {"_klcluster_df1_to_nv", (DL_FUNC) &_klcluster_df1_to_nv, 1},
    {"_klcluster_df_to_mat", (DL_FUNC) &_klcluster_df_to_mat, 1},
    {"_klcluster_mat_to_df", (DL_FUNC) &_klcluster_mat_to_df, 2},
    {"_klcluster_concat_vec", (DL_FUNC) &_klcluster_concat_vec, 2},
    {"_klcluster_subset_mat", (DL_FUNC) &_klcluster_subset_mat, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_klcluster(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
