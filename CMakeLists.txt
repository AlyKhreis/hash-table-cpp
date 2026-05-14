cmake_minimum_required(VERSION 4.2)
project(hashtable)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(hashtable main.cpp
        src/prime.cpp
        src/prime.h
        src/hash_table.cpp
        src/hash_table.h)
