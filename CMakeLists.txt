cmake_minimum_required(VERSION 3.5)
project(FizzBuzz LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -Wpedantic)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(server)
add_subdirectory(client)