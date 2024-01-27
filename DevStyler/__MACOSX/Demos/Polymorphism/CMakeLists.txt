cmake_minimum_required(VERSION 3.27)
project(Polymorphism)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Polymorphism
        ._BasePlusCommissionEmployee.cpp
        ._BasePlusCommissionEmployee.h
        ._CommissionEmployee.cpp
        ._CommissionEmployee.h
        ._main.cpp)
