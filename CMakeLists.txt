cmake_minimum_required(VERSION 3.14)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld main.cpp source/Student.cpp hearder/Student.h source/PostStudent.cpp hearder/PostStudent.h source/Constants.h source/Constants.cpp)