cmake_minimum_required(VERSION 3.27)
project(Building)

set(CMAKE_CXX_STANDARD 17)

add_executable(Building main.cpp
        task.h
        Building.cpp
        Building.h
        House.cpp
        House.h)
