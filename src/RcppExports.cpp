// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/sf.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// CPL_get_bbox
Rcpp::NumericVector CPL_get_bbox(Rcpp::List sf, int depth);
RcppExport SEXP _sf_CPL_get_bbox(SEXP sfSEXP, SEXP depthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_bbox(sf, depth));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_init
void CPL_gdal_init();
RcppExport SEXP _sf_CPL_gdal_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CPL_gdal_init();
    return R_NilValue;
END_RCPP
}
// CPL_gdal_cleanup_all
void CPL_gdal_cleanup_all();
RcppExport SEXP _sf_CPL_gdal_cleanup_all() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CPL_gdal_cleanup_all();
    return R_NilValue;
END_RCPP
}
// CPL_gdal_version
const char* CPL_gdal_version(const char* what);
RcppExport SEXP _sf_CPL_gdal_version(SEXP whatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type what(whatSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_version(what));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_parameters
Rcpp::List CPL_crs_parameters(std::string p4s);
RcppExport SEXP _sf_CPL_crs_parameters(SEXP p4sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type p4s(p4sSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_parameters(p4s));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_equivalent
Rcpp::LogicalVector CPL_crs_equivalent(std::string crs1, std::string crs2);
RcppExport SEXP _sf_CPL_crs_equivalent(SEXP crs1SEXP, SEXP crs2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type crs1(crs1SEXP);
    Rcpp::traits::input_parameter< std::string >::type crs2(crs2SEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_equivalent(crs1, crs2));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_from_epsg
Rcpp::List CPL_crs_from_epsg(int epsg);
RcppExport SEXP _sf_CPL_crs_from_epsg(SEXP epsgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type epsg(epsgSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_from_epsg(epsg));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_from_wkt
Rcpp::List CPL_crs_from_wkt(Rcpp::CharacterVector wkt);
RcppExport SEXP _sf_CPL_crs_from_wkt(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_from_wkt(wkt));
    return rcpp_result_gen;
END_RCPP
}
// CPL_roundtrip
Rcpp::List CPL_roundtrip(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_roundtrip(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_roundtrip(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_circularstring_to_linestring
Rcpp::List CPL_circularstring_to_linestring(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_circularstring_to_linestring(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_circularstring_to_linestring(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_multisurface_to_multipolygon
Rcpp::List CPL_multisurface_to_multipolygon(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_multisurface_to_multipolygon(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_multisurface_to_multipolygon(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_compoundcurve_to_linear
Rcpp::List CPL_compoundcurve_to_linear(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_compoundcurve_to_linear(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_compoundcurve_to_linear(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_curve_to_linestring
Rcpp::List CPL_curve_to_linestring(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_curve_to_linestring(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_curve_to_linestring(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_transform
Rcpp::List CPL_transform(Rcpp::List sfc, Rcpp::CharacterVector proj4);
RcppExport SEXP _sf_CPL_transform(SEXP sfcSEXP, SEXP proj4SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type proj4(proj4SEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_transform(sfc, proj4));
    return rcpp_result_gen;
END_RCPP
}
// CPL_wrap_dateline
Rcpp::List CPL_wrap_dateline(Rcpp::List sfc, Rcpp::CharacterVector opt, bool quiet);
RcppExport SEXP _sf_CPL_wrap_dateline(SEXP sfcSEXP, SEXP optSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type opt(optSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_wrap_dateline(sfc, opt, quiet));
    return rcpp_result_gen;
END_RCPP
}
// CPL_crs_from_proj4string
Rcpp::List CPL_crs_from_proj4string(Rcpp::CharacterVector p4s);
RcppExport SEXP _sf_CPL_crs_from_proj4string(SEXP p4sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type p4s(p4sSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_crs_from_proj4string(p4s));
    return rcpp_result_gen;
END_RCPP
}
// CPL_get_rgdal_drivers
Rcpp::List CPL_get_rgdal_drivers(int dummy);
RcppExport SEXP _sf_CPL_get_rgdal_drivers(SEXP dummySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type dummy(dummySEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_rgdal_drivers(dummy));
    return rcpp_result_gen;
END_RCPP
}
// CPL_sfc_from_wkt
Rcpp::List CPL_sfc_from_wkt(Rcpp::CharacterVector wkt);
RcppExport SEXP _sf_CPL_sfc_from_wkt(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_sfc_from_wkt(wkt));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_with_geos
Rcpp::LogicalVector CPL_gdal_with_geos();
RcppExport SEXP _sf_CPL_gdal_with_geos() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_with_geos());
    return rcpp_result_gen;
END_RCPP
}
// CPL_area
Rcpp::NumericVector CPL_area(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_area(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_area(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_dimension
Rcpp::IntegerVector CPL_gdal_dimension(Rcpp::List sfc, bool NA_if_empty);
RcppExport SEXP _sf_CPL_gdal_dimension(SEXP sfcSEXP, SEXP NA_if_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type NA_if_empty(NA_if_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_dimension(sfc, NA_if_empty));
    return rcpp_result_gen;
END_RCPP
}
// CPL_length
Rcpp::NumericVector CPL_length(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_length(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_length(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_segmentize
Rcpp::List CPL_gdal_segmentize(Rcpp::List sfc, double dfMaxLength);
RcppExport SEXP _sf_CPL_gdal_segmentize(SEXP sfcSEXP, SEXP dfMaxLengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< double >::type dfMaxLength(dfMaxLengthSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_segmentize(sfc, dfMaxLength));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_linestring_sample
Rcpp::List CPL_gdal_linestring_sample(Rcpp::List sfc, Rcpp::List distLst);
RcppExport SEXP _sf_CPL_gdal_linestring_sample(SEXP sfcSEXP, SEXP distLstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type distLst(distLstSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_linestring_sample(sfc, distLst));
    return rcpp_result_gen;
END_RCPP
}
// CPL_get_layers
Rcpp::List CPL_get_layers(Rcpp::CharacterVector datasource, Rcpp::CharacterVector options, bool do_count);
RcppExport SEXP _sf_CPL_get_layers(SEXP datasourceSEXP, SEXP optionsSEXP, SEXP do_countSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type datasource(datasourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type do_count(do_countSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_layers(datasource, options, do_count));
    return rcpp_result_gen;
END_RCPP
}
// CPL_read_ogr
Rcpp::List CPL_read_ogr(Rcpp::CharacterVector datasource, Rcpp::CharacterVector layer, Rcpp::CharacterVector options, bool quiet, Rcpp::NumericVector toTypeUser, bool promote_to_multi, bool int64_as_string);
RcppExport SEXP _sf_CPL_read_ogr(SEXP datasourceSEXP, SEXP layerSEXP, SEXP optionsSEXP, SEXP quietSEXP, SEXP toTypeUserSEXP, SEXP promote_to_multiSEXP, SEXP int64_as_stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type datasource(datasourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type toTypeUser(toTypeUserSEXP);
    Rcpp::traits::input_parameter< bool >::type promote_to_multi(promote_to_multiSEXP);
    Rcpp::traits::input_parameter< bool >::type int64_as_string(int64_as_stringSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_read_ogr(datasource, layer, options, quiet, toTypeUser, promote_to_multi, int64_as_string));
    return rcpp_result_gen;
END_RCPP
}
// CPL_write_ogr
void CPL_write_ogr(Rcpp::List obj, Rcpp::CharacterVector dsn, Rcpp::CharacterVector layer, Rcpp::CharacterVector driver, Rcpp::CharacterVector dco, Rcpp::CharacterVector lco, Rcpp::List geom, Rcpp::CharacterVector dim, bool quiet, bool update, bool delete_dsn, bool delete_layer);
RcppExport SEXP _sf_CPL_write_ogr(SEXP objSEXP, SEXP dsnSEXP, SEXP layerSEXP, SEXP driverSEXP, SEXP dcoSEXP, SEXP lcoSEXP, SEXP geomSEXP, SEXP dimSEXP, SEXP quietSEXP, SEXP updateSEXP, SEXP delete_dsnSEXP, SEXP delete_layerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type driver(driverSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dco(dcoSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type lco(lcoSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geom(geomSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    Rcpp::traits::input_parameter< bool >::type delete_dsn(delete_dsnSEXP);
    Rcpp::traits::input_parameter< bool >::type delete_layer(delete_layerSEXP);
    CPL_write_ogr(obj, dsn, layer, driver, dco, lco, geom, dim, quiet, update, delete_dsn, delete_layer);
    return R_NilValue;
END_RCPP
}
// CPL_geos_binop
Rcpp::List CPL_geos_binop(Rcpp::List sfc0, Rcpp::List sfc1, std::string op, double par, std::string pattern, bool sparse, bool prepared);
RcppExport SEXP _sf_CPL_geos_binop(SEXP sfc0SEXP, SEXP sfc1SEXP, SEXP opSEXP, SEXP parSEXP, SEXP patternSEXP, SEXP sparseSEXP, SEXP preparedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< double >::type par(parSEXP);
    Rcpp::traits::input_parameter< std::string >::type pattern(patternSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse(sparseSEXP);
    Rcpp::traits::input_parameter< bool >::type prepared(preparedSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_binop(sfc0, sfc1, op, par, pattern, sparse, prepared));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_valid_reason
Rcpp::CharacterVector CPL_geos_is_valid_reason(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_geos_is_valid_reason(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_valid_reason(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_valid
Rcpp::LogicalVector CPL_geos_is_valid(Rcpp::List sfc, bool NA_on_exception);
RcppExport SEXP _sf_CPL_geos_is_valid(SEXP sfcSEXP, SEXP NA_on_exceptionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type NA_on_exception(NA_on_exceptionSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_valid(sfc, NA_on_exception));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_simple
Rcpp::LogicalVector CPL_geos_is_simple(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_geos_is_simple(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_simple(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_is_empty
Rcpp::LogicalVector CPL_geos_is_empty(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_geos_is_empty(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_is_empty(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_normalize
Rcpp::List CPL_geos_normalize(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_geos_normalize(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_normalize(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_union
Rcpp::List CPL_geos_union(Rcpp::List sfc, bool by_feature);
RcppExport SEXP _sf_CPL_geos_union(SEXP sfcSEXP, SEXP by_featureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type by_feature(by_featureSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_union(sfc, by_feature));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_union2
Rcpp::List CPL_geos_union2(Rcpp::List sfc, bool by_feature, std::size_t threads);
RcppExport SEXP _sf_CPL_geos_union2(SEXP sfcSEXP, SEXP by_featureSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type by_feature(by_featureSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_union2(sfc, by_feature, threads));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_snap
Rcpp::List CPL_geos_snap(Rcpp::List sfc0, Rcpp::List sfc1, Rcpp::NumericVector tolerance);
RcppExport SEXP _sf_CPL_geos_snap(SEXP sfc0SEXP, SEXP sfc1SEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_snap(sfc0, sfc1, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_op
Rcpp::List CPL_geos_op(std::string op, Rcpp::List sfc, Rcpp::NumericVector bufferDist, int nQuadSegs, double dTolerance, bool preserveTopology, int bOnlyEdges, double dfMaxLength);
RcppExport SEXP _sf_CPL_geos_op(SEXP opSEXP, SEXP sfcSEXP, SEXP bufferDistSEXP, SEXP nQuadSegsSEXP, SEXP dToleranceSEXP, SEXP preserveTopologySEXP, SEXP bOnlyEdgesSEXP, SEXP dfMaxLengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bufferDist(bufferDistSEXP);
    Rcpp::traits::input_parameter< int >::type nQuadSegs(nQuadSegsSEXP);
    Rcpp::traits::input_parameter< double >::type dTolerance(dToleranceSEXP);
    Rcpp::traits::input_parameter< bool >::type preserveTopology(preserveTopologySEXP);
    Rcpp::traits::input_parameter< int >::type bOnlyEdges(bOnlyEdgesSEXP);
    Rcpp::traits::input_parameter< double >::type dfMaxLength(dfMaxLengthSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_op(op, sfc, bufferDist, nQuadSegs, dTolerance, preserveTopology, bOnlyEdges, dfMaxLength));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_voronoi
Rcpp::List CPL_geos_voronoi(Rcpp::List sfc, Rcpp::List env, double dTolerance, int bOnlyEdges);
RcppExport SEXP _sf_CPL_geos_voronoi(SEXP sfcSEXP, SEXP envSEXP, SEXP dToleranceSEXP, SEXP bOnlyEdgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type env(envSEXP);
    Rcpp::traits::input_parameter< double >::type dTolerance(dToleranceSEXP);
    Rcpp::traits::input_parameter< int >::type bOnlyEdges(bOnlyEdgesSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_voronoi(sfc, env, dTolerance, bOnlyEdges));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_op2
Rcpp::List CPL_geos_op2(std::string op, Rcpp::List sfcx, Rcpp::List sfcy);
RcppExport SEXP _sf_CPL_geos_op2(SEXP opSEXP, SEXP sfcxSEXP, SEXP sfcySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfcx(sfcxSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfcy(sfcySEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_op2(op, sfcx, sfcy));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_version
std::string CPL_geos_version(bool b);
RcppExport SEXP _sf_CPL_geos_version(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_version(b));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_dist
Rcpp::NumericMatrix CPL_geos_dist(Rcpp::List sfc0, Rcpp::List sfc1, Rcpp::CharacterVector which, double par);
RcppExport SEXP _sf_CPL_geos_dist(SEXP sfc0SEXP, SEXP sfc1SEXP, SEXP whichSEXP, SEXP parSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type which(whichSEXP);
    Rcpp::traits::input_parameter< double >::type par(parSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_dist(sfc0, sfc1, which, par));
    return rcpp_result_gen;
END_RCPP
}
// CPL_geos_relate
Rcpp::CharacterVector CPL_geos_relate(Rcpp::List sfc0, Rcpp::List sfc1);
RcppExport SEXP _sf_CPL_geos_relate(SEXP sfc0SEXP, SEXP sfc1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc0(sfc0SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc1(sfc1SEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_geos_relate(sfc0, sfc1));
    return rcpp_result_gen;
END_RCPP
}
// CPL_transpose_sparse_incidence
Rcpp::List CPL_transpose_sparse_incidence(Rcpp::List m, int n);
RcppExport SEXP _sf_CPL_transpose_sparse_incidence(SEXP mSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_transpose_sparse_incidence(m, n));
    return rcpp_result_gen;
END_RCPP
}
// CPL_nary_difference
Rcpp::List CPL_nary_difference(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_nary_difference(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_nary_difference(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_nary_intersection
Rcpp::List CPL_nary_intersection(Rcpp::List sfc);
RcppExport SEXP _sf_CPL_nary_intersection(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_nary_intersection(sfc));
    return rcpp_result_gen;
END_RCPP
}
// CPL_hex_to_raw
Rcpp::List CPL_hex_to_raw(Rcpp::CharacterVector cx);
RcppExport SEXP _sf_CPL_hex_to_raw(SEXP cxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type cx(cxSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_hex_to_raw(cx));
    return rcpp_result_gen;
END_RCPP
}
// CPL_raw_to_hex
Rcpp::CharacterVector CPL_raw_to_hex(Rcpp::RawVector raw);
RcppExport SEXP _sf_CPL_raw_to_hex(SEXP rawSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type raw(rawSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_raw_to_hex(raw));
    return rcpp_result_gen;
END_RCPP
}
// CPL_openmp_version
Rcpp::IntegerVector CPL_openmp_version();
RcppExport SEXP _sf_CPL_openmp_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(CPL_openmp_version());
    return rcpp_result_gen;
END_RCPP
}
// CPL_number_processors
Rcpp::IntegerVector CPL_number_processors();
RcppExport SEXP _sf_CPL_number_processors() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(CPL_number_processors());
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_version
std::string CPL_proj_version(bool b);
RcppExport SEXP _sf_CPL_proj_version(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_version(b));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_is_valid
Rcpp::List CPL_proj_is_valid(std::string proj4string);
RcppExport SEXP _sf_CPL_proj_is_valid(SEXP proj4stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type proj4string(proj4stringSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_is_valid(proj4string));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_info
Rcpp::List CPL_proj_info(int type);
RcppExport SEXP _sf_CPL_proj_info(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_info(type));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_direct
Rcpp::NumericMatrix CPL_proj_direct(Rcpp::CharacterVector from_to, Rcpp::NumericMatrix pts);
RcppExport SEXP _sf_CPL_proj_direct(SEXP from_toSEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type from_to(from_toSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_direct(from_to, pts));
    return rcpp_result_gen;
END_RCPP
}
// CPL_signed_area
double CPL_signed_area(NumericMatrix pts);
RcppExport SEXP _sf_CPL_signed_area(SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_signed_area(pts));
    return rcpp_result_gen;
END_RCPP
}
// CPL_read_wkb
Rcpp::List CPL_read_wkb(Rcpp::List wkb_list, bool EWKB, bool spatialite);
static SEXP _sf_CPL_read_wkb_try(SEXP wkb_listSEXP, SEXP EWKBSEXP, SEXP spatialiteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb_list(wkb_listSEXP);
    Rcpp::traits::input_parameter< bool >::type EWKB(EWKBSEXP);
    Rcpp::traits::input_parameter< bool >::type spatialite(spatialiteSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_read_wkb(wkb_list, EWKB, spatialite));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _sf_CPL_read_wkb(SEXP wkb_listSEXP, SEXP EWKBSEXP, SEXP spatialiteSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_sf_CPL_read_wkb_try(wkb_listSEXP, EWKBSEXP, spatialiteSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// CPL_write_wkb
Rcpp::List CPL_write_wkb(Rcpp::List sfc, bool EWKB);
static SEXP _sf_CPL_write_wkb_try(SEXP sfcSEXP, SEXP EWKBSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type EWKB(EWKBSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_write_wkb(sfc, EWKB));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _sf_CPL_write_wkb(SEXP sfcSEXP, SEXP EWKBSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_sf_CPL_write_wkb_try(sfcSEXP, EWKBSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _sf_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::List(*CPL_read_wkb)(Rcpp::List,bool,bool)");
        signatures.insert("Rcpp::List(*CPL_write_wkb)(Rcpp::List,bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _sf_RcppExport_registerCCallable() { 
    R_RegisterCCallable("sf", "_sf_CPL_read_wkb", (DL_FUNC)_sf_CPL_read_wkb_try);
    R_RegisterCCallable("sf", "_sf_CPL_write_wkb", (DL_FUNC)_sf_CPL_write_wkb_try);
    R_RegisterCCallable("sf", "_sf_RcppExport_validate", (DL_FUNC)_sf_RcppExport_validate);
    return R_NilValue;
}
