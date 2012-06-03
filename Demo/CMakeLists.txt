cmake_minimum_required(VERSION 2.6)

project(Demo)

add_subdirectory(Subdir)

add_executable(Demo Demo.cpp)
target_link_libraries(Demo SubdirLibrary)