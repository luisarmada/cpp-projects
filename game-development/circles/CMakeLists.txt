cmake_minimum_required(VERSION 3.28)
project(circle_experiment)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(circles src/main.cpp src/Game.cpp)

target_compile_features(circles PRIVATE cxx_std_23)
target_link_libraries(circles PRIVATE SFML::Graphics SFML::Audio)