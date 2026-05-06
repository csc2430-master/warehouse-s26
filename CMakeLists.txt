cmake_minimum_required(VERSION 4.1)
project(warehouse_s26)

set(CMAKE_CXX_STANDARD 20)

add_executable(warehouse_s26 main.cpp
        product.cpp
        product.h)
