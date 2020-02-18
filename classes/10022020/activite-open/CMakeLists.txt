cmake_minimum_required(VERSION 3.15)
project(activite_open)

set(CMAKE_CXX_STANDARD 14)

add_executable(activite_open
        bin/Debug/activite-open.exe
        obj/Debug/main.o
        activite-open.cbp
        activite-open.depend
        activite-open.layout
        main.c)
