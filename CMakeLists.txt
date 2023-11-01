cmake_minimum_required(VERSION 3.19 FATAL_ERROR)

project(Opengl)

add_executable(OpenglExample main.cpp)

find_package(glm REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

target_link_libraries(OpenglExample PRIVATE OpenGL::GL glm::glm glfw GLEW::GLEW)