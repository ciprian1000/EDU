cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)

set(This Lesson007-Code_separation)
project(${This})

set(HEADERS
    include/MyFirstHeaderFile.h
)

set(SOURCES
    src/Start.cpp
	src/MyFirstSourceFile.cpp
)

include_directories("include/")

add_executable(
    ${This}
    ${SOURCES}
    ${HEADERS}
)
