cmake_minimum_required(VERSION 3.13.4)

project(xlib-cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -m64)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

file(GLOB_RECURSE MY_PROJECT_SRC src/*.cpp)

find_package(X11)
find_package(OpenGL REQUIRED COMPONENTS GLX OpenGL)

add_library(xlib-cpp ${MY_PROJECT_SRC})

target_include_directories(xlib-cpp PRIVATE)

target_link_libraries(xlib-cpp PUBLIC ${X11_LIBRARIES} libXi.so OpenGL::OpenGL OpenGL::GLX)
