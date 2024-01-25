cmake_minimum_required(VERSION 3.27)
project(Regtangle)

set(CMAKE_CXX_STANDARD 17)

add_executable(Regtangle main.cpp
        Point.h
        Point.cpp
        Rectangle.h
        Rectangle.cpp
)
