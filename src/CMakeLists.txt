cmake_minimum_required(VERSION 3.5)

project(Arduino LANGUAGES CXX VERSION 0.0.1)
add_subdirectory(lib/Catch2)

set( TESTS
     spec/demo.spec.cpp
)

add_executable(unitTest spec/specs.cpp ${TESTS})

add_library(demo-library examples/demo.cpp)
target_link_libraries(unitTest Catch2::Catch2 demo-library)

