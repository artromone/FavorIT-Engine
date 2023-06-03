cmake_minimum_required(VERSION 3.18.4)
project(FavorIT_Engine)

set(CMAKE_CXX_STANDARD 14)
set(SFML_STATIC_Libraries TRUE)
set(SFML_DIR D:/Programming/SFML-2.5.1/lib/cmake/SFML)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(FavorIT_Engine main.cpp)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
link_directories("D:/D_Program_Files/SFML/lib/cmake/SFML")
include_directories(D:/D_Program_Files/SFML/include)
target_link_libraries(FavorIT_Engine sfml-system sfml-window sfml-graphics sfml-audio)
