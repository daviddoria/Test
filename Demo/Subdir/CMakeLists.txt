cmake_minimum_required(VERSION 2.6)

project(Subdir)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")

add_library(SubdirLibrary Subdir.cpp)

