cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)

project(
	Asteroids
	VERSION 0.0.1
	LANGUAGES CXX C)

include_directories(include)

set(SOURCES
	src/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
