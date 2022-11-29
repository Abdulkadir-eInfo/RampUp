cmake_minimum_required(VERSION 3.16.3)
project (MySystem)

include_directories(include/)
link_directories(include/)

add_definitions(-g)

add_library(LinuxFamily
    include/LinuxFamily.h
	src/LinuxFamily.cpp)

add_library(WindowsFamily
    include/WindowsFamily.h
	src/WindowsFamily.cpp)

add_library(LinuxFactory
    include/LinuxFactory.h
    src/LinuxFactory.cpp)

add_library(WindowsFactory
    include/WindowsFactory.h
    src/WindowsFactory.cpp)

target_link_libraries(WindowsFactory LinuxFactory)
target_link_libraries(WindowsFamily LinuxFamily)

#Target
add_executable(System Main.cpp
                src/Client.cpp
                src/LinuxFamily.cpp
                src/WindowsFamily.cpp
                src/WindowsFactory.cpp
                src/LinuxFactory.cpp)
target_include_directories(System PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
