# https://github.com/Mozilla-Ocho/llamafile/blob/main/Makefile

cmake_minimum_required(VERSION 3.5)
project(IsDigits)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER cosmocc)
set(CMAKE_CXX_COMPILER cosmoc++)
set(CMAKE_CXX_FLAG exceptions)
set(CMAKE_AR $(command -v cosmoar))

add_executable(${PROJECT_NAME}

    src/isdigits.cpp
)
