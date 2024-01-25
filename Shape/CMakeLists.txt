cmake_minimum_required(VERSION 3.27)
project(Shape)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shape main.cpp
        Shape.h
        TwoDShape.h
        ThreeDShape.h
        Shape.cpp
        TwoDShape.cpp
        ThreeDShape.cpp
        Rectangles.h
        Triangles.h
        Circles.h
        Circles.cpp
        Triangles.cpp
        Rectangles.cpp
        Square.h
        Square.cpp)
