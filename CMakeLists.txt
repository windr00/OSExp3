cmake_minimum_required(VERSION 3.5)
project(OSExp3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(OSExp3 /usr/src/linux-headers-4.4.0-21-generic/include)

set(SOURCE_FILES main.c)
add_executable(OSExp3 ${SOURCE_FILES})