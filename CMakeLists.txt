cmake_minimum_required (VERSION 3.9.0)
project(LostMap2D)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(${CMAKE_SOURCE_DIR}/libs/LostEngine2D/src)

lost_engine_includes()

add_executable(LostMap2D
    
    ${CMAKE_SOURCE_DIR}/src/lost_map.h 
    ${CMAKE_SOURCE_DIR}/src/lost_map.cpp 
    
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(LostMap2D LostEngine2D)