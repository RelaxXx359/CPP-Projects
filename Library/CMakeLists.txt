cmake_minimum_required(VERSION 3.27)
project(Library)

set(CMAKE_CXX_STANDARD 17)

add_executable(Library main.cpp
        Autor.h
        Autor.cpp
        Book.h
        Book.cpp
        Library.h
        Library.cpp)
