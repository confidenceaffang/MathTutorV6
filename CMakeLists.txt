cmake_minimum_required(VERSION 3.29)
project(MathTutorV6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MathTutorV6
    "Main (10).cpp"
    MathTutor.cpp
    MathTutor.h)
