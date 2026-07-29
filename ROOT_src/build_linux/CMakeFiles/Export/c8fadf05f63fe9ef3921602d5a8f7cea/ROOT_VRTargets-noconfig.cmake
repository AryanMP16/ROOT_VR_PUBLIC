#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ROOT::VR" for configuration ""
set_property(TARGET ROOT::VR APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ROOT::VR PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libVR.so"
  IMPORTED_SONAME_NOCONFIG "libVR.so"
  )

list(APPEND _cmake_import_check_targets ROOT::VR )
list(APPEND _cmake_import_check_files_for_ROOT::VR "${_IMPORT_PREFIX}/lib/libVR.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
