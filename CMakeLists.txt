cmake_minimum_required(VERSION 3.4...3.18)

set(CMAKE_VERBOSE_MAKEFILE ON)

project(forefire)

add_library(PLibForeFire STATIC "lib/forefire/firefront/swig/PLibForeFire.cpp")
set_target_properties(PLibForeFire PROPERTIES POSITION_INDEPENDENT_CODE ON)

set(SOURCE_DIR "src/forefire")

include_directories(${SOURCE_DIR})

target_include_directories(PLibForeFire PRIVATE "lib/forefire/firefront/src")

add_subdirectory(lib/pybind11)
pybind11_add_module(forefire "${SOURCE_DIR}/forefire_binder.cpp")
target_link_libraries(forefire PRIVATE PLibForeFire)
