cmake_minimum_required(VERSION 3.14)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld
        source/main.cpp
        source/Student.cpp
        hearder/Student.h
        source/PostStudent.cpp
        hearder/PostStudent.h
        hearder/Constants.h
        source/Constants.cpp hearder/Utils.h source/Utils.cpp)