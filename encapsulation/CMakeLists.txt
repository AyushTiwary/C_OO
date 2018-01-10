cmake_minimum_required(VERSION 3.5)
project(encapsulation)

include_directories("${PROJECT_SOURCE_DIR}/include")
add_subdirectory("${PROJECT_SOURCE_DIR}/lib")

add_executable(main main.c)
target_link_libraries(main person)