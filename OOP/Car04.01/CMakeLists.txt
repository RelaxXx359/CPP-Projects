cmake_minimum_required(VERSION 3.27)
project(Car04_01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Car04_01
        Car.cpp
        Car.h
        CarService.cpp
        CarService.h
        main.cpp)
