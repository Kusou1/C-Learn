project(main)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fms-extensions")

# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}" "${CMAKE_CURRENT_BINARY_DIR}")
add_library(Math SHARED Math.c)

add_executable(main main.c)
target_link_libraries(main Math)