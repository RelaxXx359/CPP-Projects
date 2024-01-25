cmake_minimum_required(VERSION 3.27)
project(GTPShape)

set(CMAKE_CXX_STANDARD 17)

add_executable(GTPShape main.cpp
        Shape.h
        Shape.cpp
        Circle.h
        Circle.cpp)
