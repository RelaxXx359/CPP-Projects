cmake_minimum_required(VERSION 3.27)
project(CommissionEmployee)

set(CMAKE_CXX_STANDARD 17)

add_executable(CommissionEmployee main.cpp
        CommissionEmployee.cpp
        CommissionEmployee.h
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h)
