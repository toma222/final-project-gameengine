
cmake_minimum_required (VERSION 3.5)

project(kon-project)

# Add sub directories
add_subdirectory(external/glad)
add_subdirectory(external/googletest)
add_subdirectory(external/glfw)
add_subdirectory(external/imgui-cmake-wrapper)

add_subdirectory(kon)


