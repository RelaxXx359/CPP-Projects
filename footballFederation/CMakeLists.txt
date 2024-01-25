cmake_minimum_required(VERSION 3.27)
project(FootballFederation_)

set(CMAKE_CXX_STANDARD 17)

add_executable(FootballFederation_ main.cpp
        Team.h
        Team.cpp
        Users.cpp
        Users.h
        Admin.cpp
        Admin.h)
