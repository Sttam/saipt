cmake_minimum_required(VERSION 3.16.3)
#initial version
project(saipt12S VERSION 1.0.0 LANGUAGES CXX )

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

add_executable(s17_00101 ${MY_SOURCE_DIR}/s17_00101.cpp)
add_executable(s17_00201 ${MY_SOURCE_DIR}/s17_00201.cpp)
add_executable(s17_00202 ${MY_SOURCE_DIR}/s17_00202.cpp)
add_executable(s17_00203 ${MY_SOURCE_DIR}/s17_00203.cpp)

add_executable(s17_00401 ${MY_SOURCE_DIR}/s17_00401.cpp)
add_executable(s17_00402 ${MY_SOURCE_DIR}/s17_00402.cpp)
add_executable(s17_00403 ${MY_SOURCE_DIR}/s17_00403.cpp)

add_executable(s17_00501 ${MY_SOURCE_DIR}/s17_00501.cpp)
add_executable(s17_00502 ${MY_SOURCE_DIR}/s17_00502.cpp)
add_executable(s17_00503 ${MY_SOURCE_DIR}/s17_00503.cpp)
add_executable(s17_00504 ${MY_SOURCE_DIR}/s17_00504.cpp)

add_executable(s17_00601 ${MY_SOURCE_DIR}/s17_00601.cpp)

add_executable(s17_00701 ${MY_SOURCE_DIR}/s17_00701.cpp)
add_executable(s17_00702 ${MY_SOURCE_DIR}/s17_00702.cpp)


add_executable(s17_00801 ${MY_SOURCE_DIR}/s17_00801.cpp)

add_executable(s17_00901 ${MY_SOURCE_DIR}/s17_00901.cpp)

add_executable(s17_01001 ${MY_SOURCE_DIR}/s17_01001.cpp)