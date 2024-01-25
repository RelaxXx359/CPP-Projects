cmake_minimum_required(VERSION 3.27)
project(BookAutor)

set(CMAKE_CXX_STANDARD 17)

add_executable(BookAutor main.cpp
        Book.cpp
        Book.h
        Author.cpp
        Author.h)
