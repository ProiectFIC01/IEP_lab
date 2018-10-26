cmake_minimum_required(VERSION 2.8)

project(myapp)

add_subdirectory(library)

add_executable(myapp app.cpp)

target_link_libraries(myapp library)