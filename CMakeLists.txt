cmake_minimum_required(VERSION 3.0)
project(Wine)

set(CMAKE_CXX_STANDARD 11)

add_executable(Wine src/main.cpp src/wine.h src/wine_comp.cpp src/wine_comp.h src/wine_inh.cpp src/wine_inh.h)