cmake_minimum_required(VERSION 3.24)
project(pegarlistas C)

set(CMAKE_C_STANDARD 11)

add_executable(pegarlistas main.c cmake-build-debug/concatenar.c cmake-build-debug/concatenar.h)
