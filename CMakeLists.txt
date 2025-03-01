cmake_minimum_required(VERSION 3.10)
project(ComplexCalc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/logic/functions/cubic.cpp
    src/logic/functions/linear.cpp
    src/logic/functions/octic.cpp
    src/logic/functions/quadratic.cpp
    src/logic/functions/quartic.cpp
    src/logic/functions/quintic.cpp
    src/logic/functions/septic.cpp
    src/logic/functions/sextic.cpp
    src/logic/matrices/matrix_addition.cpp
    src/logic/matrices/matrix_subtraction.cpp
    src/logic/matrices/matrix_utils.cpp
)

add_executable(main ${SOURCES})