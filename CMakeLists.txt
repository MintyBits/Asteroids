cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)

project(
	Asteroids
	VERSION 0.0.1
	LANGUAGES CXX C)

include_directories(include)

set(SOURCES
	src/main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lSDL3")

add_executable(${PROJECT_NAME} ${SOURCES})
