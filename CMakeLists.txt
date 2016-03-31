cmake_minimum_required(VERSION 3.2)

set(ProjectName "CPPTestProgram" CACHE PATH "Name of the Project")

project(${ProjectName})

add_executable(${ProjectName} 
  src/main.cpp
  src/main.hpp
  src/io.hpp
  src/io.cpp)