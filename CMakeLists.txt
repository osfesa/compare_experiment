cmake_minimum_required(VERSION 3.21)

project(cpu_compare VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(Config.h.in Config.h)

# Subdirectories
add_subdirectory(utils)
list(APPEND EXTRA_LIBS utils)

add_executable(cpu_compare main.cpp)

target_link_libraries(cpu_compare PUBLIC ${EXTRA_LIBS})

# Include build directory for autogenerated files
target_include_directories(cpu_compare PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

