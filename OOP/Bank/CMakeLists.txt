cmake_minimum_required(VERSION 3.27)
project(Bank)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Bank
        cmake-build-debug/Acccound.cpp
        cmake-build-debug/Acccound.h
        cmake-build-debug/Accound.cpp
        cmake-build-debug/Accound.h)
