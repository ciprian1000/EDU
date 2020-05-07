cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)

set(This Lesson009-Classes_and_structs_basic)
project(${This})

set(HEADERS
    include/MyFirstClass.h
)

set(SOURCES
    src/Start.cpp
	src/MyFirstClass.cpp
)

include_directories("include/")

add_executable(
    ${This}
    ${SOURCES}
    ${HEADERS}
)
