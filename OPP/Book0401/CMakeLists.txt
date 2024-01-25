cmake_minimum_required(VERSION 3.27)
project(Book0401)

set(CMAKE_CXX_STANDARD 17)

add_executable(Book0401 main.cpp
        Book.h
        BookService.h
        Book.cpp
        BookService.cpp)
