cmake_minimum_required(VERSION 2.6)

project(Subdir)

add_library(SubdirLibrary Subdir.cpp)
set_target_properties(SubdirLibrary PROPERTIES COMPILE_FLAGS "-std=gnu++0x")
