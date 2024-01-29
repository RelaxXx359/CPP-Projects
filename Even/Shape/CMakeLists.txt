cmake_minimum_required(VERSION 3.27)
project(Shape)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shape main.cpp
        task.h
        Shape.cpp
        Shape.h
        Circle.cpp
        Circle.h
        Regtangle.cpp
        Regtangle.h
)
