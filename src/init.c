#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _sf_CPL_area(SEXP);
extern SEXP _sf_CPL_circularstring_to_linestring(SEXP);
extern SEXP _sf_CPL_compoundcurve_to_linear(SEXP);
extern SEXP _sf_CPL_crs_equivalent(SEXP, SEXP);
extern SEXP _sf_CPL_crs_from_epsg(SEXP);
extern SEXP _sf_CPL_crs_from_proj4string(SEXP);
extern SEXP _sf_CPL_crs_from_wkt(SEXP);
extern SEXP _sf_CPL_crs_parameters(SEXP);
extern SEXP _sf_CPL_curve_to_linestring(SEXP);
extern SEXP _sf_CPL_gdal_cleanup_all();
extern SEXP _sf_CPL_gdal_dimension(SEXP, SEXP);
extern SEXP _sf_CPL_gdal_init();
extern SEXP _sf_CPL_gdal_linestring_sample(SEXP, SEXP);
extern SEXP _sf_CPL_gdal_segmentize(SEXP, SEXP);
extern SEXP _sf_CPL_gdal_version(SEXP);
extern SEXP _sf_CPL_gdal_with_geos();
extern SEXP _sf_CPL_geos_binop(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_geos_dist(SEXP, SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_geos_is_empty(SEXP);
extern SEXP _sf_CPL_geos_is_simple(SEXP);
extern SEXP _sf_CPL_geos_is_valid(SEXP, SEXP);
extern SEXP _sf_CPL_geos_is_valid_reason(SEXP);
extern SEXP _sf_CPL_geos_normalize(SEXP);
extern SEXP _sf_CPL_geos_op(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_geos_op2(SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_geos_relate(SEXP, SEXP);
extern SEXP _sf_CPL_geos_snap(SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_geos_union(SEXP, SEXP);
extern SEXP _sf_CPL_geos_union2(SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_geos_version(SEXP);
extern SEXP _sf_CPL_geos_voronoi(SEXP, SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_get_bbox(SEXP, SEXP);
extern SEXP _sf_CPL_get_layers(SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_get_rgdal_drivers(SEXP);
extern SEXP _sf_CPL_hex_to_raw(SEXP);
extern SEXP _sf_CPL_length(SEXP);
extern SEXP _sf_CPL_multisurface_to_multipolygon(SEXP);
extern SEXP _sf_CPL_nary_difference(SEXP);
extern SEXP _sf_CPL_nary_intersection(SEXP);
extern SEXP _sf_CPL_number_processors();
extern SEXP _sf_CPL_openmp_version();
extern SEXP _sf_CPL_proj_direct(SEXP, SEXP);
extern SEXP _sf_CPL_proj_info(SEXP);
extern SEXP _sf_CPL_proj_is_valid(SEXP);
extern SEXP _sf_CPL_proj_version(SEXP);
extern SEXP _sf_CPL_raw_to_hex(SEXP);
extern SEXP _sf_CPL_read_ogr(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_read_wkb(SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_roundtrip(SEXP);
extern SEXP _sf_CPL_sfc_from_wkt(SEXP);
extern SEXP _sf_CPL_signed_area(SEXP);
extern SEXP _sf_CPL_transform(SEXP, SEXP);
extern SEXP _sf_CPL_transpose_sparse_incidence(SEXP, SEXP);
extern SEXP _sf_CPL_wrap_dateline(SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_write_ogr(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _sf_CPL_write_wkb(SEXP, SEXP);
extern SEXP _sf_RcppExport_registerCCallable();

static const R_CallMethodDef CallEntries[] = {
    {"_sf_CPL_area",                         (DL_FUNC) &_sf_CPL_area,                          1},
    {"_sf_CPL_circularstring_to_linestring", (DL_FUNC) &_sf_CPL_circularstring_to_linestring,  1},
    {"_sf_CPL_compoundcurve_to_linear",      (DL_FUNC) &_sf_CPL_compoundcurve_to_linear,       1},
    {"_sf_CPL_crs_equivalent",               (DL_FUNC) &_sf_CPL_crs_equivalent,                2},
    {"_sf_CPL_crs_from_epsg",                (DL_FUNC) &_sf_CPL_crs_from_epsg,                 1},
    {"_sf_CPL_crs_from_proj4string",         (DL_FUNC) &_sf_CPL_crs_from_proj4string,          1},
    {"_sf_CPL_crs_from_wkt",                 (DL_FUNC) &_sf_CPL_crs_from_wkt,                  1},
    {"_sf_CPL_crs_parameters",               (DL_FUNC) &_sf_CPL_crs_parameters,                1},
    {"_sf_CPL_curve_to_linestring",          (DL_FUNC) &_sf_CPL_curve_to_linestring,           1},
    {"_sf_CPL_gdal_cleanup_all",             (DL_FUNC) &_sf_CPL_gdal_cleanup_all,              0},
    {"_sf_CPL_gdal_dimension",               (DL_FUNC) &_sf_CPL_gdal_dimension,                2},
    {"_sf_CPL_gdal_init",                    (DL_FUNC) &_sf_CPL_gdal_init,                     0},
    {"_sf_CPL_gdal_linestring_sample",       (DL_FUNC) &_sf_CPL_gdal_linestring_sample,        2},
    {"_sf_CPL_gdal_segmentize",              (DL_FUNC) &_sf_CPL_gdal_segmentize,               2},
    {"_sf_CPL_gdal_version",                 (DL_FUNC) &_sf_CPL_gdal_version,                  1},
    {"_sf_CPL_gdal_with_geos",               (DL_FUNC) &_sf_CPL_gdal_with_geos,                0},
    {"_sf_CPL_geos_binop",                   (DL_FUNC) &_sf_CPL_geos_binop,                    7},
    {"_sf_CPL_geos_dist",                    (DL_FUNC) &_sf_CPL_geos_dist,                     4},
    {"_sf_CPL_geos_is_empty",                (DL_FUNC) &_sf_CPL_geos_is_empty,                 1},
    {"_sf_CPL_geos_is_simple",               (DL_FUNC) &_sf_CPL_geos_is_simple,                1},
    {"_sf_CPL_geos_is_valid",                (DL_FUNC) &_sf_CPL_geos_is_valid,                 2},
    {"_sf_CPL_geos_is_valid_reason",         (DL_FUNC) &_sf_CPL_geos_is_valid_reason,          1},
    {"_sf_CPL_geos_normalize",               (DL_FUNC) &_sf_CPL_geos_normalize,                1},
    {"_sf_CPL_geos_op",                      (DL_FUNC) &_sf_CPL_geos_op,                       8},
    {"_sf_CPL_geos_op2",                     (DL_FUNC) &_sf_CPL_geos_op2,                      3},
    {"_sf_CPL_geos_relate",                  (DL_FUNC) &_sf_CPL_geos_relate,                   2},
    {"_sf_CPL_geos_snap",                    (DL_FUNC) &_sf_CPL_geos_snap,                     3},
    {"_sf_CPL_geos_union",                   (DL_FUNC) &_sf_CPL_geos_union,                    2},
    {"_sf_CPL_geos_union2",                  (DL_FUNC) &_sf_CPL_geos_union2,                   3},
    {"_sf_CPL_geos_version",                 (DL_FUNC) &_sf_CPL_geos_version,                  1},
    {"_sf_CPL_geos_voronoi",                 (DL_FUNC) &_sf_CPL_geos_voronoi,                  4},
    {"_sf_CPL_get_bbox",                     (DL_FUNC) &_sf_CPL_get_bbox,                      2},
    {"_sf_CPL_get_layers",                   (DL_FUNC) &_sf_CPL_get_layers,                    3},
    {"_sf_CPL_get_rgdal_drivers",            (DL_FUNC) &_sf_CPL_get_rgdal_drivers,             1},
    {"_sf_CPL_hex_to_raw",                   (DL_FUNC) &_sf_CPL_hex_to_raw,                    1},
    {"_sf_CPL_length",                       (DL_FUNC) &_sf_CPL_length,                        1},
    {"_sf_CPL_multisurface_to_multipolygon", (DL_FUNC) &_sf_CPL_multisurface_to_multipolygon,  1},
    {"_sf_CPL_nary_difference",              (DL_FUNC) &_sf_CPL_nary_difference,               1},
    {"_sf_CPL_nary_intersection",            (DL_FUNC) &_sf_CPL_nary_intersection,             1},
    {"_sf_CPL_number_processors",            (DL_FUNC) &_sf_CPL_number_processors,             0},
    {"_sf_CPL_openmp_version",               (DL_FUNC) &_sf_CPL_openmp_version,                0},
    {"_sf_CPL_proj_direct",                  (DL_FUNC) &_sf_CPL_proj_direct,                   2},
    {"_sf_CPL_proj_info",                    (DL_FUNC) &_sf_CPL_proj_info,                     1},
    {"_sf_CPL_proj_is_valid",                (DL_FUNC) &_sf_CPL_proj_is_valid,                 1},
    {"_sf_CPL_proj_version",                 (DL_FUNC) &_sf_CPL_proj_version,                  1},
    {"_sf_CPL_raw_to_hex",                   (DL_FUNC) &_sf_CPL_raw_to_hex,                    1},
    {"_sf_CPL_read_ogr",                     (DL_FUNC) &_sf_CPL_read_ogr,                      7},
    {"_sf_CPL_read_wkb",                     (DL_FUNC) &_sf_CPL_read_wkb,                      3},
    {"_sf_CPL_roundtrip",                    (DL_FUNC) &_sf_CPL_roundtrip,                     1},
    {"_sf_CPL_sfc_from_wkt",                 (DL_FUNC) &_sf_CPL_sfc_from_wkt,                  1},
    {"_sf_CPL_signed_area",                  (DL_FUNC) &_sf_CPL_signed_area,                   1},
    {"_sf_CPL_transform",                    (DL_FUNC) &_sf_CPL_transform,                     2},
    {"_sf_CPL_transpose_sparse_incidence",   (DL_FUNC) &_sf_CPL_transpose_sparse_incidence,    2},
    {"_sf_CPL_wrap_dateline",                (DL_FUNC) &_sf_CPL_wrap_dateline,                 3},
    {"_sf_CPL_write_ogr",                    (DL_FUNC) &_sf_CPL_write_ogr,                    12},
    {"_sf_CPL_write_wkb",                    (DL_FUNC) &_sf_CPL_write_wkb,                     2},
    {"_sf_RcppExport_registerCCallable",     (DL_FUNC) &_sf_RcppExport_registerCCallable,      0},
    {NULL, NULL, 0}
};

void R_init_sf(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
