cmake_minimum_required(VERSION 3.27)
project(Scool)

set(CMAKE_CXX_STANDARD 17)

add_executable(Scool main.cpp
        Student.cpp
        Teacher.cpp
        School.cpp
        Class.cpp
        Discipline.cpp)
