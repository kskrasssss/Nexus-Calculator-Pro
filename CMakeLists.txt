cmake_minimum_required(VERSION 4.1)
project(Nexus_Calculator_Pro)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nexus_Calculator_Pro
        Calculator.h
        main.cpp)
