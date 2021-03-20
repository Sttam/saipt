cmake_minimum_required(VERSION 3.10)
#initial version
project(ch16 VERSION 1.0.0 LANGUAGES CXX )

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

add_executable(s16_0101 ${MY_SOURCE_DIR}/s16_0101.cpp)
add_executable(s16_0102 ${MY_SOURCE_DIR}/s16_0102.cpp)
add_executable(s16_0201 ${MY_SOURCE_DIR}/s16_0201.cpp)
add_executable(s16_0202 ${MY_SOURCE_DIR}/s16_0202.cpp)
add_executable(s16_0203 ${MY_SOURCE_DIR}/s16_0203.cpp)
add_executable(s16_0204 ${MY_SOURCE_DIR}/s16_0204.cpp)
add_executable(s16_0205 ${MY_SOURCE_DIR}/s16_0205.cpp)
add_executable(s16_0206 ${MY_SOURCE_DIR}/s16_0206.cpp)
add_executable(s16_0207 ${MY_SOURCE_DIR}/s16_0207.cpp)
add_executable(s16_0208 ${MY_SOURCE_DIR}/s16_0208.cpp)
add_executable(s16_0209 ${MY_SOURCE_DIR}/s16_0209.cpp)
add_executable(s16_0210 ${MY_SOURCE_DIR}/s16_0210.cpp)
add_executable(s16_0301 ${MY_SOURCE_DIR}/s16_0301.cpp)
