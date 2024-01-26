cmake_minimum_required(VERSION 3.27)
project(OperatorOveerloading)

set(CMAKE_CXX_STANDARD 14)

include_directories(__MACOSX/OperatorOveerloading/Demos/Date)
include_directories(__MACOSX/OperatorOveerloading/Demos/PhoneNumber)
include_directories(OperatorOveerloading/Demos/Date)
include_directories(OperatorOveerloading/Demos/PhoneNumber)

add_executable(OperatorOveerloading
        __MACOSX/OperatorOveerloading/Demos/Date/._Date.cpp
        __MACOSX/OperatorOveerloading/Demos/Date/._Date.h
        __MACOSX/OperatorOveerloading/Demos/Date/._main.cpp
        __MACOSX/OperatorOveerloading/Demos/PhoneNumber/._main.cpp
        __MACOSX/OperatorOveerloading/Demos/PhoneNumber/._PhoneNumber.cpp
        __MACOSX/OperatorOveerloading/Demos/PhoneNumber/._PhoneNumber.h
        OperatorOveerloading/Demos/Date/Date.cpp
        OperatorOveerloading/Demos/Date/Date.h
        OperatorOveerloading/Demos/Date/main.cpp
        OperatorOveerloading/Demos/PhoneNumber/main.cpp
        OperatorOveerloading/Demos/PhoneNumber/PhoneNumber.cpp
        OperatorOveerloading/Demos/PhoneNumber/PhoneNumber.h)
