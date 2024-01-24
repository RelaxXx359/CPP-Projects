cmake_minimum_required(VERSION 3.27)
project(OnlineShop)

set(CMAKE_CXX_STANDARD 17)

add_executable(OnlineShop main.cpp
        Drinks.cpp
        Drinks.h
        Alcoholic.cpp
        Alcoholic.h
        NoAlcoholic.cpp
        NonAlcoholic.h
        User.cpp
        User.h
        Orders.cpp
        Orders.h
        Shop.cpp
        Shop.h)
