# C++ Programming 
# Special Operators

cmake_minimum_required(VERSION 3.1)
project(saipt18S VERSION 1.0.0 LANGUAGES CXX )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set( MY_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src" )
set( MY_INC_DIR    "${CMAKE_CURRENT_SOURCE_DIR}/inc" )

message("Setting source director to       : ${MY_SOURCE_DIR}")
message("Setting include director to      : ${MY_INC_DIR}")


include_directories(${MY_INC_DIR})

add_executable(s19_00101 ${MY_SOURCE_DIR}/s19_00101.cpp)
add_executable(s19_00102 ${MY_SOURCE_DIR}/s19_00102.cpp)

add_executable(s19_00201 ${MY_SOURCE_DIR}/s19_00201.cpp)
add_executable(s19_00202 ${MY_SOURCE_DIR}/s19_00202.cpp)
add_executable(s19_00203 ${MY_SOURCE_DIR}/s19_00203.cpp)

add_executable(s19_00301 ${MY_SOURCE_DIR}/s19_00301.cpp)
add_executable(s19_00302 ${MY_SOURCE_DIR}/s19_00302.cpp)
add_executable(s19_00303 ${MY_SOURCE_DIR}/s19_00303.cpp)

add_executable(s19_00401 ${MY_SOURCE_DIR}/s19_00401.cpp)

add_executable(s19_00501 ${MY_SOURCE_DIR}/s19_00501.cpp)

add_executable(s19_00601 ${MY_SOURCE_DIR}/s19_00601.cpp)
