cmake_minimum_required(VERSION 4.0)
project(Destructor)

set(CMAKE_CXX_STANDARD 14)

include_directories(Destructor)

add_executable(Destructor
        Destructor/Person.cpp
        Destructor/Person.h
        Destructor/Source.cpp)
