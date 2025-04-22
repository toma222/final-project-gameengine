# Set the project name
project (kon)

file(GLOB_RECURSE SRCS *.cpp)
file(GLOB_RECURSE HDRS *.hpp)

# Add a library with the above sources
add_library(${PROJECT_NAME} ${SRCS} ${HDRS})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
	spdlog
	EnTT::EnTT
)

