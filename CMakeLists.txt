cmake_minimum_required(VERSION 2.8.9)
project(ObjectPool)

# C++11
set (CMAKE_CXX_STANDARD 11)

# Compile data base
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# Add sources
file(GLOB SOURCES "*.cpp")

add_library(ObjectPool SHARED ${SOURCES})


