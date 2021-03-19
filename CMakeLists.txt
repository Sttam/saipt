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

# saipt001_01 - First Hello World to see all the setups are good to go
# explains the elments of programming  

set( MY_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src" )
set( MY_INC_DIR    "${CMAKE_CURRENT_LIST_DIR}/inc" )

message("Setting source director to       : ${MY_SOURCE_DIR}")
message("Setting include director to      : ${MY_INC_DIR}")

include_directories(${MY_INC_DIR})

#ISO Standards and implementation-defined Example
add_executable(s06_00101 ${MY_SOURCE_DIR}/s06_00101.cpp)
add_executable(s06_00102 ${MY_SOURCE_DIR}/s06_00102.cpp)

#How is a boolean should be used & a few variation to help
add_executable(s06_00201 ${MY_SOURCE_DIR}/s06_00201.cpp)
add_executable(s06_00202 ${MY_SOURCE_DIR}/s06_00202.cpp)
add_executable(s06_00203 ${MY_SOURCE_DIR}/s06_00203.cpp)
add_executable(s06_00204 ${MY_SOURCE_DIR}/s06_00204.cpp)

#Character Manipulations Limits Literals
add_executable(s06_00301 ${MY_SOURCE_DIR}/s06_00301.cpp)
add_executable(s06_00302 ${MY_SOURCE_DIR}/s06_00302.cpp)
add_executable(s06_00303 ${MY_SOURCE_DIR}/s06_00303.cpp)
add_executable(s06_00304 ${MY_SOURCE_DIR}/s06_00304.cpp)
add_executable(s06_00305 ${MY_SOURCE_DIR}/s06_00305.cpp)

#Integer                    
add_executable(s06_00401 ${MY_SOURCE_DIR}/s06_00401.cpp)

#Floating point numbers                    
add_executable(s06_00501 ${MY_SOURCE_DIR}/s06_00501.cpp)

#Limits                    
add_executable(s06_00601 ${MY_SOURCE_DIR}/s06_00601.cpp)
add_executable(s06_00602 ${MY_SOURCE_DIR}/s06_00602.cpp)

#Declarations                    
add_executable(s06_00701 ${MY_SOURCE_DIR}/s06_00701.cpp)
add_executable(s06_00702 ${MY_SOURCE_DIR}/s06_00702.cpp)
add_executable(s06_00703 ${MY_SOURCE_DIR}/s06_00703.cpp)
add_executable(s06_00704 ${MY_SOURCE_DIR}/s06_00704.cpp)
add_executable(s06_00705 ${MY_SOURCE_DIR}/s06_00705.cpp)

#Intializer                    
add_executable(s06_00801 ${MY_SOURCE_DIR}/s06_00801.cpp)




