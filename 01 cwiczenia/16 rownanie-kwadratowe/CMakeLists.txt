cmake_minimum_required(VERSION 3.6)
project(rownanie_kw)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.c)

add_executable(rownanie_kw ${SOURCE_FILES})

target_link_libraries(rownanie_kw m)
