cmake_minimum_required(VERSION 3.20)
project(strace LANGUAGES CXX)


add_executable(mystrace
src/main.cpp)


target_compile_features(mystrace PRIVATE cxx_std_20)

foreach(target IN LISTS ALL_TARGETS)
    target_include_directories(${target} PRIVATE src)
    target_compile_features(${target} PRIVATE cxx_std_20)
    target_compile_options(${target} PRIVATE -Wall -Wextra)
endforeach()

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()
