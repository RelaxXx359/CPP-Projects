cmake_minimum_required(VERSION 3.27)
project(Date)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Date
        Date.cpp
        Date.h
        main.cpp
        Box.cpp
        Box.h)
