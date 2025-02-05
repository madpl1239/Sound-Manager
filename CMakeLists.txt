# CMakeLists.txt for sndTest
# Testing of simply Sound Manager for my chess GUI
# 04-02-2025 by madpl

cmake_minimum_required(VERSION 3.31)

project(sndTest)
add_definitions(-Os -march=native -std=c++23)

file(GLOB_RECURSE SOURCE ./source/*)
find_package(SFML 2.5 REQUIRED COMPONENTS audio system)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})
target_link_libraries(${CMAKE_PROJECT_NAME} sfml-audio sfml-system)
