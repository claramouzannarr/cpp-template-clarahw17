# Every CMake project needs to start with these two lines
cmake_minimum_required(VERSION 3.28)
project(Homework VERSION 1.0)

# Project Metadata
set(PROJECT_AUTHOR "Your Name")

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable compile_commands.json for VSCode intellisense
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Add subdirectories for source files, tests, and docs
add_subdirectory(src)
enable_testing()  # Enable testing framework
add_subdirectory(tests)
add_subdirectory(docs)
