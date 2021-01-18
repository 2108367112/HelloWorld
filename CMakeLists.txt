cmake_minimum_required(VERSION 3.14)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

include_directories(hearder/)

add_executable(HelloWorld
        source/main.cpp
        source/cLanguage/Constants.cpp
        source/cLanguage/Utils.cpp
        source/cLanguage/PointTest.cpp
        source/FaceObject/PostStudent.cpp
        source/FaceObject/Student.cpp
        source/FaceObject/Parent.cpp
        source/FaceObject/Sun.cpp
        source/FaceObject/Dog.cpp
        source/FaceObject/Teacher.cpp
        source/cLanguage/namespaceTest.cpp)



