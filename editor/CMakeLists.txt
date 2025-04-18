
project(editor)

file(GLOB_RECURSE SRCS editor/*.cpp)

add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME}
    kon
)

