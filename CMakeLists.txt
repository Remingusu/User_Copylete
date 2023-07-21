cmake_minimum_required(VERSION 3.25)
project(User_Copylete)

set(CMAKE_CXX_STANDARD 17)

add_executable(User_Copylete main.cpp src/files/deleter.cpp src/headers/deleter.h src/files/gui.cpp src/headers/gui.h src/files/copy_paste.cpp src/headers/copy_paste.h src/files/users_lister.cpp src/headers/users_lister.h)
