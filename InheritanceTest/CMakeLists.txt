cmake_minimum_required(VERSION 3.27)
project(InheritanceTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(InheritanceTest main.cpp
        Animal.h
        Dog.h
        Dog.cpp)
