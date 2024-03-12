cmake_minimum_required(VERSION 3.16)

project(RogueLike LANGUAGES CXX)

set(HEADER_FILES
    src/include/main.hpp
    )

set(SOURCE_FILES
    src/main.cpp
    )

set(BUILD_SHARED_LIBS OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(RogueLike ${SOURCE_FILES} ${HEADER_FILES})


target_precompile_headers(RogueLike PRIVATE ${HEADER_FILES})

target_link_libraries(RogueLike PRIVATE sfml-graphics)
target_compile_features(RogueLike PRIVATE cxx_std_17)

install(TARGETS RogueLike)

add_custom_command(
    TARGET RogueLike
    POST_BUILD
    COMMAND $<TARGET_FILE:RogueLike>
    VERBATIM)
