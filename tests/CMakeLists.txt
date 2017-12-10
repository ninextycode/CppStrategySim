cmake_minimum_required(VERSION 2.8)


set(CMAKE_CXX_STANDARD 14)


find_package(Boost REQUIRED COMPONENTS unit_test_framework system)

add_executable(test_executable tests.cpp)
target_include_directories(test_executable PRIVATE ${Boost_INCLUDE_DIRS})
target_compile_definitions(test_executable PRIVATE "BOOST_TEST_DYN_LINK=1")
target_link_libraries(test_executable engine_lib ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})