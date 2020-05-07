cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)

set(This Lesson008-Namespaces)
project(${This})

set(HEADERS
    
)

set(SOURCES
    src/Start.cpp
)

include_directories("include/")

add_executable(
    ${This}
    ${SOURCES}
    ${HEADERS}
)
