cmake_minimum_required(VERSION 3.27)
project(GradeBookMaxGrades)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GradeBookMaxGrades
        GradeBook.cpp
        GradeBook.h
        main.cpp)
