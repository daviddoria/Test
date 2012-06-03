cmake_minimum_required(VERSION 2.6)

project(Demo)

add_subdirectory(Subdir)

#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")

add_executable(Demo Demo.cpp)
target_link_libraries(Demo SubdirLibrary)