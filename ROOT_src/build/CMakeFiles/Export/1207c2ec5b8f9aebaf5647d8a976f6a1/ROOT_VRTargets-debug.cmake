#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ROOT::VR" for configuration "Debug"
set_property(TARGET ROOT::VR APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ROOT::VR PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/VR.lib"
  )

list(APPEND _cmake_import_check_targets ROOT::VR )
list(APPEND _cmake_import_check_files_for_ROOT::VR "${_IMPORT_PREFIX}/lib/VR.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
