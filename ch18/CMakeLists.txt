# C++ Programming for embedded systems using Linux and its variants. 
# Operator Overloading
cmake_minimum_required(VERSION 3.2)
project(saipt18S VERSION 1.0.0 LANGUAGES CXX )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set( MY_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src" )
set( MY_INC_DIR    "${CMAKE_CURRENT_SOURCE_DIR}/inc" )

message("Setting source director to       : ${MY_SOURCE_DIR}")
message("Setting include director to      : ${MY_INC_DIR}")


include_directories(${MY_INC_DIR})

add_executable(s18_00101 ${MY_SOURCE_DIR}/s18_00101.cpp)
add_executable(s18_00102 ${MY_SOURCE_DIR}/s18_00102.cpp)

add_executable(s18_00201 ${MY_SOURCE_DIR}/s18_00201.cpp)
add_executable(s18_00202 ${MY_SOURCE_DIR}/s18_00202.cpp)

add_executable(s18_00203a ${MY_SOURCE_DIR}/s18_00203a.cpp)
add_executable(s18_00203b ${MY_SOURCE_DIR}/s18_00203b.cpp)
add_executable(s18_00203c ${MY_SOURCE_DIR}/s18_00203c.cpp)
add_executable(s18_00203d ${MY_SOURCE_DIR}/s18_00203d.cpp)
add_executable(s18_00203e ${MY_SOURCE_DIR}/s18_00203e.cpp)

add_executable(s18_00301 ${MY_SOURCE_DIR}/s18_00301.cpp)
add_executable(s18_00302 ${MY_SOURCE_DIR}/s18_00302.cpp)