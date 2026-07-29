#Heavily inspired by Luke T. Pickering's ROOTEGPythia6 dictionary
cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(ROOT_VR VERSION 0.10.0 LANGUAGES CXX)

add_definitions(-D_HAS_STD_BYTE=0)

#Dependencies
find_package(ROOT 6 REQUIRED COMPONENTS Hist Graf Graf3d Gpad)
include(${ROOT_USE_FILE})

#ROOT Dictionary
ROOT_GENERATE_DICTIONARY(G__ROOT_VR
    ${CMAKE_CURRENT_LIST_DIR}/inc/VR.h #CMAKE_CURRENT_LIST_DIR is full directory of the current CMakeList
    ${CMAKE_CURRENT_LIST_DIR}/inc/VRGraph2D.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/VRHist.h
    LINKDEF ${CMAKE_CURRENT_LIST_DIR}/inc/LinkDef.h
)

add_library(VR SHARED #"SHARED" means "dynamic library that may be linked by other targets and loaded at runtime" (source: Cmake website)
    G__ROOT_VR.cxx
    ${CMAKE_CURRENT_LIST_DIR}/src/VR.cxx
    ${CMAKE_CURRENT_LIST_DIR}/src/VRGraph2D.cxx
    ${CMAKE_CURRENT_LIST_DIR}/src/VRHist.cxx
)

add_library(ROOT::VR ALIAS VR)

target_link_libraries(VR PUBLIC ROOT::Hist ROOT::Graf ROOT::Graf3d ROOT::Gpad)
target_include_directories(VR PUBLIC 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
  $<INSTALL_INTERFACE:include>)

set_target_properties(VR PROPERTIES
    PUBLIC_HEADER "inc/VR.h;inc/VRGraph2D.h;inc/VRHist.h")

install(TARGETS VR
      EXPORT ROOT_VR-targets
      LIBRARY DESTINATION lib 
      ARCHIVE DESTINATION lib 
      PUBLIC_HEADER DESTINATION include)

#install(FILES 
#    ${CMAKE_CURRENT_BINARY_DIR}/libG__ROOT_VR.rootmap 
#    ${CMAKE_CURRENT_BINARY_DIR}/libG__ROOT_VR_rdict.pcm 
#    DESTINATION lib)

install(EXPORT ROOT_VR-targets
  FILE ROOT_VRTargets.cmake
  NAMESPACE ROOT::
  DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/cmake/ROOT_VR
)

#cmake -DROOT_DIR=C:/ROOT_files/installdir/cmake ..
#cmake --build . --config Release
