# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget rtabmap::core)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target rtabmap::core
add_library(rtabmap::core SHARED IMPORTED)

set_target_properties(rtabmap::core PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "/home/chaung/f_ws/src/rtabmap/corelib/src/../include;/home/chaung/f_ws/build/rtabmap/corelib/src/include;/usr/include/opencv4;/usr/include/pcl-1.10;/usr/include/eigen3;/usr/include;/usr/include/ni;/usr/include/vtk-7.1;/usr/include/freetype2;/usr/include/x86_64-linux-gnu"
  INTERFACE_LINK_LIBRARIES "rtabmap::utilite;opencv_core;opencv_calib3d;opencv_imgproc;opencv_highgui;opencv_stitching;opencv_photo;opencv_video;opencv_videoio;opencv_aruco;pcl_common;pcl_octree;pcl_io;pcl_kdtree;pcl_search;pcl_surface;pcl_filters;pcl_features;pcl_registration;pcl_sample_consensus;pcl_ml;pcl_segmentation;pcl_visualization;/usr/lib/x86_64-linux-gnu/libboost_system.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_date_time.so;/usr/lib/x86_64-linux-gnu/libboost_iostreams.so;/usr/lib/x86_64-linux-gnu/libboost_regex.so;/usr/lib/x86_64-linux-gnu/libqhull.so;/usr/lib/x86_64-linux-gnu/libqhull.so;/usr/lib/libOpenNI.so;vtkChartsCore;vtkCommonColor;vtkCommonCore;vtksys;vtkCommonDataModel;vtkCommonMath;vtkCommonMisc;vtkCommonSystem;vtkCommonTransforms;vtkCommonExecutionModel;vtkFiltersGeneral;vtkCommonComputationalGeometry;vtkFiltersCore;vtkInfovisCore;vtkFiltersExtraction;vtkFiltersStatistics;vtkImagingFourier;vtkImagingCore;vtkalglib;vtkRenderingContext2D;vtkRenderingCore;vtkFiltersGeometry;vtkFiltersSources;vtkRenderingFreeType;/usr/lib/x86_64-linux-gnu/libfreetype.so;/usr/lib/x86_64-linux-gnu/libz.so;vtkFiltersModeling;vtkImagingSources;vtkInteractionStyle;vtkInteractionWidgets;vtkFiltersHybrid;vtkImagingColor;vtkImagingGeneral;vtkImagingHybrid;vtkIOImage;vtkDICOMParser;vtkmetaio;/usr/lib/x86_64-linux-gnu/libjpeg.so;/usr/lib/x86_64-linux-gnu/libpng.so;/usr/lib/x86_64-linux-gnu/libtiff.so;vtkRenderingAnnotation;vtkRenderingVolume;vtkIOXML;vtkIOCore;vtkIOXMLParser;/usr/lib/x86_64-linux-gnu/libexpat.so;vtkIOGeometry;vtkIOLegacy;vtkIOPLY;vtkRenderingLOD;vtkViewsContext2D;vtkViewsCore;vtkRenderingContextOpenGL2;vtkRenderingOpenGL2;FLANN::FLANN;vtkGUISupportQt;vtkRenderingVolumeOpenGL2;octomap"
)

# Import target "rtabmap::core" for configuration "Release"
set_property(TARGET rtabmap::core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rtabmap::core PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/chaung/f_ws/build/rtabmap/bin/librtabmap_core.so.0.21.1"
  IMPORTED_SONAME_RELEASE "librtabmap_core.so.0.21"
  )

# Make sure the targets which have been exported in some other 
# export set exist.
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
foreach(_target "rtabmap::utilite" )
  if(NOT TARGET "${_target}" )
    set(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets "${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets} ${_target}")
  endif()
endforeach()

if(DEFINED ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
  if(CMAKE_FIND_PACKAGE_NAME)
    set( ${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
    set( ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  else()
    message(FATAL_ERROR "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  endif()
endif()
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
