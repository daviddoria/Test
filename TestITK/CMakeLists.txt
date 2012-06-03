cmake_minimum_required(VERSION 2.6)
 
project(TestITK)
 
find_package(ITK REQUIRED)
include(${ITK_USE_FILE})

add_executable(TestITK TestITK.cpp)
target_link_libraries(TestITK ${ITK_LIBRARIES})
