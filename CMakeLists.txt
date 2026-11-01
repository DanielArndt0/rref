cmake_minimum_required(VERSION 3.16)

project(rref VERSION 1.0.0 LANGUAGES CXX)

add_library(rref INTERFACE)
add_library(rref::rref ALIAS rref)

target_compile_features(rref INTERFACE cxx_std_11)

target_include_directories(rref INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
    add_executable(rref_basic examples/basic.cpp)
    target_link_libraries(rref_basic PRIVATE rref::rref)
endif()
