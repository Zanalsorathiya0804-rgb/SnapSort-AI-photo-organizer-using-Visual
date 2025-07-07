cmake_minimum_required(VERSION 3.10)
project(SnapSort)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS} includes)

file(GLOB SOURCES "src/*.cpp")
add_executable(SnapSort main.cpp ${SOURCES})

target_link_libraries(SnapSort ${OpenCV_LIBS})
