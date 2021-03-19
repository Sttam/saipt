cmake_minimum_required(VERSION 3.16.3)
#initial version
project(sait VERSION 1.0.0 LANGUAGES CXX )

# Project will collect essential examples to create a tutorial for 
# the employees and customers of SenseAI Private LTD in 
# C++ Programming for embedded systems using Linux and its variants. 

# Global standard options followed by the project


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(TRAINEES "RBEI")
message("Running the program fr ${COMPANY}")
set(BUILD_SHARED_LIBS YES)
message("Building the shared Library : ${BUILD_SHARED_LIBS}")

set( MY_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src" )
set( MY_INC_DIR    "${CMAKE_CURRENT_LIST_DIR}/inc" )

message("Setting source director to       : ${MY_SOURCE_DIR}")
message("Setting include director to      : ${MY_INC_DIR}")

include_directories(${MY_INC_DIR})

add_executable(s01_00101 ${MY_SOURCE_DIR}/s01_00101.cpp)
add_executable(s01_00102 ${MY_SOURCE_DIR}/s01_00102.cpp)
add_executable(s01_00103 ${MY_SOURCE_DIR}/s01_00103.cpp)
add_executable(s01_00104 ${MY_SOURCE_DIR}/s01_00104.cpp)
add_executable(s01_00201 ${MY_SOURCE_DIR}/s01_00201.cpp)
add_executable(s01_00301 ${MY_SOURCE_DIR}/s01_00301.cpp)

add_executable(s01_00401 ${MY_SOURCE_DIR}/s01_00401.cpp)
add_executable(s01_00402 ${MY_SOURCE_DIR}/s01_00402.cpp)
add_executable(s01_00403 ${MY_SOURCE_DIR}/s01_00403.cpp)
add_executable(s01_00501 ${MY_SOURCE_DIR}/s01_00501.cpp)
add_executable(s01_00601 ${MY_SOURCE_DIR}/s01_00601.cpp)
add_executable(s01_00602 ${MY_SOURCE_DIR}/s01_00602.cpp)
add_executable(s01_00701 ${MY_SOURCE_DIR}/s01_00701.cpp)
