cmake_minimum_required(VERSION 3.4...3.18)

set(CMAKE_VERBOSE_MAKEFILE ON)

project(forefire)

add_library(PLibForeFire STATIC "lib/forefire/include/forefire/PLibForeFire.cpp")

set_target_properties(PLibForeFire PROPERTIES POSITION_INDEPENDENT_CODE ON)

set(SOURCE_DIR "src/forefire")

include_directories(${SOURCE_DIR})

target_include_directories(PLibForeFire PUBLIC "lib/forefire/include/forefire")

add_subdirectory(lib/pybind11)

set(SOURCES "lib/forefire/include/forefire/PLibForeFire.cpp")

pybind11_add_module(forefire ${SOURCES} "${SOURCE_DIR}/forefire_binder.cpp")

target_link_libraries(forefire PUBLIC PLibForeFire)
