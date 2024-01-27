cmake_minimum_required(VERSION 3.27)
project(MultipleInheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MultipleInheritance
        Base1.h
        Base2.h
        Derived.cpp
        Derived.h
        main.cpp)
