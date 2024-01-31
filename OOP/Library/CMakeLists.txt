cmake_minimum_required(VERSION 3.27)
project(Library)

set(CMAKE_CXX_STANDARD 17)

add_executable(Library main.cpp
        Book.cpp
        Book.h
        Author.cpp
        Author.h
        Library.cpp
        Library.h
        task.h)
