cmake_minimum_required(VERSION 3.5)

project(gen_config)

SET(CMAKE_C_COMPILER   gcc)
SET(CMAKE_CXX_COMPILER g++)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(gen_config ${PROJECT_SOURCE_DIR}/src/main.c)

