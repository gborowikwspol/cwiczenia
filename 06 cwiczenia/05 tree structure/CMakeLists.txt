cmake_minimum_required(VERSION 3.6)
project(05_tree_structure)

set(CMAKE_CXX_STANDARD 11)

add_executable(05_tree_structure
        dane.c
        dane.h
        main.c
        stos.c
        stos.h tree.c tree.h)
