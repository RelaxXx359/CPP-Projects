cmake_minimum_required(VERSION 3.27)
project(CarRental)

set(CMAKE_CXX_STANDARD 17)

add_executable(CarRental main.cpp
        Car.cpp
        Car.h
        FamilyCar.cpp
        FamilyCar.h
        LuxuryCar.cpp
        LuxuryCar.h)
