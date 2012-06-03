cmake_minimum_required(VERSION 2.6)

project(Test0x)

if(UNIX)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")
endif(UNIX)

if(WIN32)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
endif(WIN32)

add_executable(Test0x Test0x.cpp)

