cmake_minimum_required(VERSION 3.10)

project(sr LANGUAGES CXX)

add_library(sr STATIC ${CMAKE_CURRENT_SOURCE_DIR}/sha256.cpp
                      ${CMAKE_CURRENT_SOURCE_DIR}/secure_random.cpp)
target_include_directories(sr INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(
  sr_test
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/sha256.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/secure_random.cpp)

target_include_directories(sr_test INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})