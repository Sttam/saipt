cmake_minimum_required(VERSION 3.10)
#initial version
project(saipt23S VERSION 1.0.0 LANGUAGES CXX )

# Project will collect essential examples to create a tutorial for 
# the employees and customers of SenseAI Private LTD in 
# Global standard followed for C++ project
# C++ Programming for embedded systems using Linux and its variants. 
# Structures, Unions, and Enumerations


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(BUILD_SHARED_LIBS YES)
message("Building the shared Library : ${BUILD_SHARED_LIBS}")

set( MY_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src" )
set( MY_INC_DIR    "${CMAKE_CURRENT_LIST_DIR}/inc" )

message("Setting source director to       : ${MY_SOURCE_DIR}")
message("Setting include director to      : ${MY_INC_DIR}")

include_directories(${MY_INC_DIR})
#cmake_reset_check_state();

add_executable(s20_0101 ${MY_SOURCE_DIR}/s20_0101.cpp)
add_executable(s20_0102 ${MY_SOURCE_DIR}/s20_0102.cpp)
add_executable(s20_0103 ${MY_SOURCE_DIR}/s20_0103.cpp)
add_executable(s20_0104 ${MY_SOURCE_DIR}/s20_0104.cpp)
add_executable(s20_0105 ${MY_SOURCE_DIR}/s20_0105.cpp)
add_executable(s20_0201 ${MY_SOURCE_DIR}/s20_0201.cpp)
add_executable(s20_0202 ${MY_SOURCE_DIR}/s20_0202.cpp)
