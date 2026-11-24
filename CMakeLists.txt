cmake_minimum_required(VERSION 3.20)
project(strace LANGUAGES CXX)



add_executable(mystrace
src/main.cpp)

foreach(target IN LISTS ALL_TARGETS)
    target_include_directories(${target} PRIVATE src)
    target_compile_features(${target} PRIVATE cxx_std_20)
    target_compile_options(${target} PRIVATE -Wall -Wextra)
endforeach()
