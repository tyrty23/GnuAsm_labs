cmake_minimum_required(VERSION 3.10)
project(MyProject)
include_directories(include)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall  -Wextra -Werror ")
add_executable(ex1 src/ex1.cpp)

add_executable(ex2 src/ex2.cpp)
add_executable(ex3 src/ex3.cpp)
add_executable(ex4 src/ex4.cpp)
add_executable(ex5 src/ex5.cpp)
add_executable(ex6 src/ex6.cpp)
add_executable(ex7 src/ex7.cpp)
add_executable(ex8 src/ex8.cpp)





