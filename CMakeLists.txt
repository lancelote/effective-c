cmake_minimum_required(VERSION 3.21)
project(effective_c C)

set(CMAKE_C_STANDARD 23)

add_executable(basic src/ch01/basic.c)
add_executable(check_return src/ch01/check_return.c)
add_executable(format_output src/ch01/formatted_output.c)
