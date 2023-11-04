cmake_minimum_required(VERSION 3.22)
project(CLion_c C)

set(CMAKE_C_STANDARD 11)

add_executable(CLion_c main.c function_test/find_Narcissistic.h function_test/multiplication_table.h function_test/FibonacchiSequence.h)
