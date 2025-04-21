
cmake_minimum_required (VERSION 3.5)

<<<<<<< HEAD
=======
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

>>>>>>> parent of 4154548 (updated git ignore)
project(kon-project)

# Add sub directories
add_subdirectory(external/spdlog)

add_subdirectory(kon)
add_subdirectory(editor)

