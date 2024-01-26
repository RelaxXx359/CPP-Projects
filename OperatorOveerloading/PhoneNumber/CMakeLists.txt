cmake_minimum_required(VERSION 3.27)
project(PhoneNumber)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PhoneNumber
        main.cpp
        PhoneNumber.cpp
        PhoneNumber.h)
