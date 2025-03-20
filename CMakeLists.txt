## CMake config 
cmake_minimum_required(VERSION 3.10)
project(ash C)

# Include directories for headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Gather sources files using GLOB 
file(GLOB SOURCES 
    "${CMAKE_SOURCE_DIR}/src/*.c"
)

# Gather source files
# set(SOURCES
#     src/main.c 
#     src/*.c
# )

# Adding executables
add_executable(ash ${SOURCES})