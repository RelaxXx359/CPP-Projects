cmake_minimum_required(VERSION 3.27)
project(CommissionEmployee)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CommissionEmployee
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        main.cpp)
