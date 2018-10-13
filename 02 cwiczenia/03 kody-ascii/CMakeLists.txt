cmake_minimum_required(VERSION 2.8.4)
project(kody_ascii)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(kody_ascii ${SOURCE_FILES})