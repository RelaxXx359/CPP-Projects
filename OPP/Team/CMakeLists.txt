cmake_minimum_required(VERSION 3.27)
project(Team)

set(CMAKE_CXX_STANDARD 17)

add_executable(Team main.cpp
        Admin.cpp
        Admin.h
        Team.cpp
        Team.h
        Schedule.h)
