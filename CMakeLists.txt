cmake_minimum_required(VERSION 2.8)

project(Strategy)
set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/*.cpp) 

add_library(engine_lib headers/Engine.h  ${SOURCE_FILES})
add_executable(main ${PROJECT_SOURCE_DIR}/main.cpp ${SOURCE_FILES})
target_link_libraries(main engine_lib)


enable_testing ()
add_subdirectory (tests)
add_test(NAME test1 COMMAND test_executable)
