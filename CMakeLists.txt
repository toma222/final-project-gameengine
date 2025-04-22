
cmake_minimum_required (VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(kon-project)

# Add sub directories
add_subdirectory(external/spdlog)
add_subdirectory(external/entt)

add_subdirectory(kon)
add_subdirectory(editor)

