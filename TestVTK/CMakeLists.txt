cmake_minimum_required(VERSION 2.6)
 
project(TestVTK)
  
find_package(VTK REQUIRED)
include(${VTK_USE_FILE})
 
add_executable(TestVTK TestVTK.cpp)
target_link_libraries(TestVTK ${VTK_LIBRARIES})
