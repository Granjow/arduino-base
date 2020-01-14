cmake_minimum_required(VERSION 3.5)

project(Arduino LANGUAGES CXX VERSION 0.0.1)
add_subdirectory(lib/Catch2)

set( TESTS
     spec/demo.spec.cpp
)

add_executable(unitTest spec/specs.cpp ${TESTS})
target_link_libraries(unitTest Catch2::Catch2)

#add_library(dimmer-ramp ac-triac-dimmer-single/dimmer-ramp.cpp)
#target_link_libraries(unitTest Catch2::Catch2 dimmer-ramp)

