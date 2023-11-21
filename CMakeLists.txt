message(STATUS "Welcome!")

cmake_minimum_required(VERSION 3.25)
project(play)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(my_std INTERFACE my_std.h)
target_compile_features(my_std INTERFACE cxx_std_17)

add_executable(play play.cpp)
target_link_libraries(play my_std)
