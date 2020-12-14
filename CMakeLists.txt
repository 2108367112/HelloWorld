cmake_minimum_required(VERSION 3.14)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld
        source/main.cpp
        source/Student.cpp
        source/PostStudent.cpp
        source/Constants.cpp
        source/Utils.cpp
        source/Parent.cpp
        source/Sun.cpp )

include_directories(hearder/)