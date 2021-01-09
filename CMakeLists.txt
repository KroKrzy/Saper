cmake_minimum_required(VERSION 3.0)

project(saper LANGUAGES C)

add_executable(saper main.c)

install(TARGETS saper RUNTIME DESTINATION bin)
