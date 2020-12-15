cmake_minimum_required(VERSION 3.14)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

include_directories(hearder/)

add_executable(HelloWorld
        source/main.cpp
        source/common/Constants.cpp
        source/common/Utils.cpp
        source/common/PointTest.cpp
        source/Object/PostStudent.cpp
        source/Object/Student.cpp
        source/Object/Parent.cpp
        source/Object/Sun.cpp
        source/Object/Teacher.cpp
        )



