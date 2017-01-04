cmake_minimum_required(VERSION 3.0)
project(Game)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -lm")

set(SOURCE_FILES src/main.c
		src/universe.c
		src/universe.h
		src/universe_define.h)

add_executable(Game ${SOURCE_FILES})