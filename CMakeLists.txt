cmake_minimum_required (VERSION 3.9.0)
project(LostMap2D)

add_subdirectory(${CMAKE_SOURCE_DIR}/libs/LostEngine2D/src)

lost_engine_includes()

add_executable(LostMap2D 
    main.cpp
)

target_link_libraries(LostMap2D LostEngine2D)