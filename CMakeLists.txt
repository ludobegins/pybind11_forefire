cmake_minimum_required(VERSION 3.4...3.18)
project(cmake_example)

add_library(mymath STATIC src/mymath.cpp)
set_target_properties(mymath PROPERTIES POSITION_INDEPENDENT_CODE ON)

add_subdirectory(extern/pybind11)
pybind11_add_module(cmake_example src/main.cpp)
target_link_libraries(cmake_example PRIVATE mymath)
