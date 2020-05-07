cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)

project("EDU")

if(MSVC)
	set(CompilerFlags
        CMAKE_CXX_FLAGS
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_C_FLAGS
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_RELEASE
        )
	foreach(CompilerFlag ${CompilerFlags})
	  string(REPLACE "/MD" "/MT" ${CompilerFlag} "${${CompilerFlag}}")
	endforeach()
endif()

add_subdirectory("Lesson001-Basic_program_structure")
add_subdirectory("Lesson002-Variables")
add_subdirectory("Lesson003-Operators")
add_subdirectory("Lesson004-Functions")
add_subdirectory("Lesson005-Branching")
add_subdirectory("Lesson006-Loops")
add_subdirectory("Lesson007-Code_separation")
add_subdirectory("Lesson008-Namespaces")
add_subdirectory("Lesson009-Classes_and_structs_basic")
