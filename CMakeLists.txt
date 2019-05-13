cmake_minimum_required(VERSION 2.8)

project(WaytoMars)
set(CMAKE_CXX_STANDARD 17)
add_executable(${PROJECT_NAME} "main.cpp""integrator.cpp""integrator.h"
    "planets.h""planets.cpp")
