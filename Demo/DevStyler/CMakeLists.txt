cmake_minimum_required(VERSION 3.27)
project(Demos__1_)

set(CMAKE_CXX_STANDARD 14)

include_directories(__MACOSX/Demos/CommissionEmployee)
include_directories(__MACOSX/Demos/DerivedBaseClassObject)
include_directories(__MACOSX/Demos/DerivedMemberFunction)
include_directories(__MACOSX/Demos/Polymorphism)
include_directories(Demos/CommissionEmployee)
include_directories(Demos/DerivedBaseClassObject)
include_directories(Demos/DerivedMemberFunction)
include_directories(Demos/Polymorphism)

add_executable(Demos__1_
        .idea/.gitignore
        ".idea/Demos (1).iml"
        .idea/modules.xml
        .idea/workspace.xml
        __MACOSX/Demos/CommissionEmployee/._BasePlusCommissionEmployee.cpp
        __MACOSX/Demos/CommissionEmployee/._BasePlusCommissionEmployee.h
        __MACOSX/Demos/CommissionEmployee/._CommissionEmployee.cpp
        __MACOSX/Demos/CommissionEmployee/._CommissionEmployee.h
        __MACOSX/Demos/CommissionEmployee/._main.cpp
        __MACOSX/Demos/DerivedBaseClassObject/._BasePlusCommissionEmployee.cpp
        __MACOSX/Demos/DerivedBaseClassObject/._BasePlusCommissionEmployee.h
        __MACOSX/Demos/DerivedBaseClassObject/._CommissionEmployee.cpp
        __MACOSX/Demos/DerivedBaseClassObject/._CommissionEmployee.h
        __MACOSX/Demos/DerivedBaseClassObject/._main.cpp
        __MACOSX/Demos/DerivedMemberFunction/._BasePlusCommissionEmployee.cpp
        __MACOSX/Demos/DerivedMemberFunction/._BasePlusCommissionEmployee.h
        __MACOSX/Demos/DerivedMemberFunction/._CommissionEmployee.cpp
        __MACOSX/Demos/DerivedMemberFunction/._CommissionEmployee.h
        __MACOSX/Demos/DerivedMemberFunction/._main.cpp
        __MACOSX/Demos/Polymorphism/._BasePlusCommissionEmployee.cpp
        __MACOSX/Demos/Polymorphism/._BasePlusCommissionEmployee.h
        __MACOSX/Demos/Polymorphism/._CommissionEmployee.cpp
        __MACOSX/Demos/Polymorphism/._CommissionEmployee.h
        __MACOSX/Demos/Polymorphism/._main.cpp
        Demos/CommissionEmployee/BasePlusCommissionEmployee.cpp
        Demos/CommissionEmployee/BasePlusCommissionEmployee.h
        Demos/CommissionEmployee/CommissionEmployee.cpp
        Demos/CommissionEmployee/CommissionEmployee.h
        Demos/CommissionEmployee/main.cpp
        Demos/DerivedBaseClassObject/BasePlusCommissionEmployee.cpp
        Demos/DerivedBaseClassObject/BasePlusCommissionEmployee.h
        Demos/DerivedBaseClassObject/CommissionEmployee.cpp
        Demos/DerivedBaseClassObject/CommissionEmployee.h
        Demos/DerivedBaseClassObject/main.cpp
        Demos/DerivedMemberFunction/BasePlusCommissionEmployee.cpp
        Demos/DerivedMemberFunction/BasePlusCommissionEmployee.h
        Demos/DerivedMemberFunction/CommissionEmployee.cpp
        Demos/DerivedMemberFunction/CommissionEmployee.h
        Demos/DerivedMemberFunction/main.cpp
        Demos/Polymorphism/BasePlusCommissionEmployee.cpp
        Demos/Polymorphism/BasePlusCommissionEmployee.h
        Demos/Polymorphism/CommissionEmployee.cpp
        Demos/Polymorphism/CommissionEmployee.h
        Demos/Polymorphism/main.cpp)
