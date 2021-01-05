cmake_minimum_required (VERSION 3.5)

project (HelloWorld)


set (source_dir "${PROJECT_SOURCE_DIR} source/")
set (CMAKE_CXX_FLAGS"$ {CMAKE_CSS_FLAGS} -Wall -Werror -std=c++14")

file(GLOB source_files "source/*.cpp")
add_executable (HelloWorld ${source_files} )
