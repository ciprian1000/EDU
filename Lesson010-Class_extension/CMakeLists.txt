cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)

set(This Lesson010-Class_extension)
project(${This})

set(HEADERS
    include/Animal.h
	include/Bird.h
	include/Cat.h
	include/Chicken.h
	include/Dog.h
)

set(SOURCES
    src/Start.cpp
	src/Animal.cpp
	src/Bird.cpp
	src/Cat.cpp
	src/Chicken.cpp
	src/Dog.cpp
)

include_directories("include/")

add_executable(
    ${This}
    ${SOURCES}
    ${HEADERS}
)
