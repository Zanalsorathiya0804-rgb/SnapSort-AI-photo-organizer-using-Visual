cmake_minimum_required(VERSION 3.10)
project(SnapSortGUI)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(SnapSortGUI main.cpp mainwindow.cpp)
target_link_libraries(SnapSortGUI Qt5::Widgets)