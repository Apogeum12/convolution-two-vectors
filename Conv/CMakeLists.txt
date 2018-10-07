cmake_minimum_required (VERSION 3.10)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(Conv)

set(CMAKE_BINARY_DIR "bin")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable (
Conv 
"main.cpp"
"Conv.cpp"
)

#set(CMAKE_CXX_FLAGS "-Wall")

#add_subdirectory(src)

