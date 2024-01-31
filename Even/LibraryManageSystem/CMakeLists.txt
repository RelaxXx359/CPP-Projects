cmake_minimum_required(VERSION 3.27)
project(LibraryManageSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(LibraryManageSystem main.cpp
        Book.cpp
        Member.h
        Member.cpp)
