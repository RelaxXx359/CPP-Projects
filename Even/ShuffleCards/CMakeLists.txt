cmake_minimum_required(VERSION 3.27)
project(Cards)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cards main.cpp
        PlayingCard.h
        PlayingCard.cpp
        DeckOfCards.h
        DeckOfCards.cpp)
