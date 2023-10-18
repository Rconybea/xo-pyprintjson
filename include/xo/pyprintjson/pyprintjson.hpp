/* @file pyprintjson.hpp
 *
 * automatically generated from src/pyprintjson/pyprintjson.hpp.in
 * see src/pyprintjson/CMakeLists.txt
 */

/* python requires module name = library name
 * example:
 *   PYBIND11_MODULE(PYPRINTJSON_MODULE_NAME(), m) { ... }
 */
#define PYPRINTJSON_MODULE_NAME() pyprintjson

/* example:
 *   py::module_::import(PYPRINTJSON_MODULE_NAME_STR)
 */
#define PYPRINTJSON_MODULE_NAME_STR "pyprintjson"

/* example:
 *   PYPRINTJSON_IMPORT_MODULE()
 * replaces
 *   py::module_::import("pyprintjson")
 */
#define PYPRINTJSON_IMPORT_MODULE() py::module_::import("pyprintjson")

/* end pyprintjson.hpp */
