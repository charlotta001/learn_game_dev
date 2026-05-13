cmake_minimum_required(VERSION 3.30)
project(raylib_3d)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Path ke raylib (sesuaikan kalau beda)
set(RAYLIB_INCLUDE "C:/raylib/raylib/src")
set(RAYLIB_LIB     "C:/raylib/raylib/src")

add_executable(raylib_3d
    src/main.cpp
)

target_include_directories(raylib_3d PRIVATE ${RAYLIB_INCLUDE})

target_link_directories(raylib_3d PRIVATE ${RAYLIB_LIB})

target_link_libraries(raylib_3d
    raylib
    opengl32
    gdi32
    winmm
)

# Suppress console window di build Release
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_link_options(raylib_3d PRIVATE -mwindows)
endif()