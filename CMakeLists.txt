
cmake_minimum_required (VERSION 3.5)

project(kon-project)

# Add sub directories
add_subdirectory(external/spdlog)

add_subdirectory(kon)
add_subdirectory(editor)

