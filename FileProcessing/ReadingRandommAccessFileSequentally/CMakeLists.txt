cmake_minimum_required(VERSION 3.27)
project(ReadingRandommAccessFileSequentally)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ReadingRandommAccessFileSequentally
        ClientData.cpp
        ClientData.h
        main.cpp)
