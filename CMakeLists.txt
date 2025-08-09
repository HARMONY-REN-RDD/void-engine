cmake_minimum_required(VERSION 3.15)
project(voe_multi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3 -static -ldl -static-libgcc -static-libstdc++")

include(FetchContent)

set(SDL_VIDEO_KMSDRM ON CACHE BOOL "Enable KMSDRM backend" FORCE)
set(SDL_SHARED OFF CACHE BOOL "Build SDL shared library" FORCE)
set(SDL_STATIC ON CACHE BOOL "Build SDL static library" FORCE)

FetchContent_Declare(
  SDL3
  GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
  GIT_TAG release-3.2.20
)

FetchContent_MakeAvailable(SDL3)

include_directories(include)
file(GLOB_RECURSE SRC "src/*.cpp")

string(TOLOWER "${CMAKE_SYSTEM_NAME}" SYSTEM_NAME_LOWER)
if(SYSTEM_NAME_LOWER STREQUAL "windows")
    add_subdirectory(platforms/windows)
else()
    add_subdirectory(platforms/linux)
endif()

