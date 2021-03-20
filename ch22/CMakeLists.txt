cmake_minimum_required(VERSION 3.10)
#initial version
project(saipt VERSION 1.0.0 LANGUAGES CXX )

# Run-Time Type Information(RTTI)


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

add_executable(s22_00101 ${MY_SOURCE_DIR}/s22_00101.cpp)
