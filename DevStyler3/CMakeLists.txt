cmake_minimum_required(VERSION 3.27)
project(Demos__3_)

set(CMAKE_CXX_STANDARD 14)

include_directories(__MACOSX/Demos/GradeBookMaxGrades)
include_directories(__MACOSX/Demos/TemplateMaximum)
include_directories(Demos/GradeBookMaxGrades)
include_directories(Demos/TemplateMaximum)

add_executable(Demos__3_
        __MACOSX/Demos/ComparePassBy/._main.cpp
        __MACOSX/Demos/CrapsSimulation/._main.cpp
        __MACOSX/Demos/DefaultArguments/._main.cpp
        __MACOSX/Demos/GradeBookMaxGrades/._GradeBook.cpp
        __MACOSX/Demos/GradeBookMaxGrades/._GradeBook.h
        __MACOSX/Demos/GradeBookMaxGrades/._main.cpp
        __MACOSX/Demos/InlineCubeVolume/._main.cpp
        __MACOSX/Demos/IterativeFactorial/._main.cpp
        __MACOSX/Demos/NoArguments/._main.cpp
        __MACOSX/Demos/OverloadedFunctions/._main.cpp
        __MACOSX/Demos/RandomDie/._main.cpp
        __MACOSX/Demos/RandomIntegers/._main.cpp
        __MACOSX/Demos/RecursiveFactorial/._main.cpp
        __MACOSX/Demos/RecursiveFibonacci/._main.cpp
        __MACOSX/Demos/ReferencesInitialization/._main.cpp
        __MACOSX/Demos/ReferencesInitialization2/._main.cpp
        __MACOSX/Demos/RollDie/._main.cpp
        __MACOSX/Demos/ScopeExample/._main.cpp
        __MACOSX/Demos/SquareFunction/._main.cpp
        __MACOSX/Demos/TemplateMaximum/._main.cpp
        __MACOSX/Demos/TemplateMaximum/._Maximum.h
        __MACOSX/Demos/UnaryScopeOperator/._main.cpp
        Demos/ComparePassBy/main.cpp
        Demos/CrapsSimulation/main.cpp
        Demos/DefaultArguments/main.cpp
        Demos/GradeBookMaxGrades/GradeBook.cpp
        Demos/GradeBookMaxGrades/GradeBook.h
        Demos/GradeBookMaxGrades/main.cpp
        Demos/InlineCubeVolume/main.cpp
        Demos/IterativeFactorial/main.cpp
        Demos/NoArguments/main.cpp
        Demos/OverloadedFunctions/main.cpp
        Demos/RandomDie/main.cpp
        Demos/RandomIntegers/main.cpp
        Demos/RecursiveFactorial/main.cpp
        Demos/RecursiveFibonacci/main.cpp
        Demos/ReferencesInitialization/main.cpp
        Demos/ReferencesInitialization2/main.cpp
        Demos/RollDie/main.cpp
        Demos/ScopeExample/main.cpp
        Demos/SquareFunction/main.cpp
        Demos/TemplateMaximum/main.cpp
        Demos/TemplateMaximum/Maximum.h
        Demos/UnaryScopeOperator/main.cpp)
