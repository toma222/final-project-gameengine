
cmake_minimum_required (VERSION 3.5)

project(kon-project)

find_package(Qt6)

# Add sub directories
add_subdirectory(external/spdlog)

add_subdirectory(kon)
add_subdirectory(editor)

