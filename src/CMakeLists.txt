cmake_minimum_required(VERSION 3.16)

project(RogueLike)

set(HEADER_FILES
    include/main.hpp
    )

set(SOURCE_FILES
    main.cpp
    )

add_executable(RogueLike ${SOURCE_FILES} ${HEADER_FILES})
target_precompile_headers(RogueLike PRIVATE ${HEADER_FILES})
