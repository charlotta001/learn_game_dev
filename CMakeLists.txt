cmake_minimum_required(VERSION 3.30)
project(learn_game_dev)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RAYLIB_INCLUDE "C:/raylib/include")
set(RAYLIB_LIB     "C:/raylib/lib/Debug")

add_executable(learn_game_dev
    src/main.cpp
    src/world.cpp
)

target_include_directories(learn_game_dev PRIVATE ${RAYLIB_INCLUDE})
target_link_directories(learn_game_dev PRIVATE ${RAYLIB_LIB})

target_link_libraries(learn_game_dev
    raylib
    opengl32
    gdi32
    winmm
)