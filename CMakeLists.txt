cmake_minimum_required(VERSION 3.8)

project(
    CerW
    LANGUAGES CXX)

set(CMAKe_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

add_executable(main main.cpp)