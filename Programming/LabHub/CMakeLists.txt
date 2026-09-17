cmake_minimum_required(VERSION 3.20)

project(LabHub)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LabHub
    src/main.cpp

    src/UI/ConsoleUI.cpp

    src/Labs/Lab1/Lab1.cpp
    src/Labs/Lab2/Lab2.cpp
    src/Labs/Lab3/Lab3.cpp
    src/Labs/Lab4/Lab4.cpp
    src/Labs/Lab5/Lab5.cpp
    src/Labs/Lab6/Lab6.cpp
    
    src/Labs/Lab1/Task1/Task1.cpp
    src/Labs/Lab1/Task2/Task2.cpp
    src/Labs/Lab1/Task3/Task3.cpp
    src/Labs/Lab1/Task4/Task4.cpp

    src/Labs/Lab2/Task1/Task1.cpp
    src/Labs/Lab2/Task2/Task2.cpp

    src/Labs/Lab3/Task1/Task1.cpp
    src/Labs/Lab3/Task2/Task2.cpp
    src/Labs/Lab3/Task3/Task3.cpp
    src/Labs/Lab3/Task4/Task4.cpp

    src/Labs/Lab4/Task1/Task1.cpp
    src/Labs/Lab4/Task2/Task2.cpp
    src/Labs/Lab4/Task3/Task3.cpp

    src/Labs/Lab5/Task1/Task1.cpp
    src/Labs/Lab5/Task2/Task2.cpp
    src/Labs/Lab5/Task3/Task3.cpp

    src/Labs/Lab6/Task1/Task1.cpp
    src/Labs/Lab6/Task2/Task2.cpp
    src/Labs/Lab6/Task3/Task3.cpp
)

target_include_directories(LabHub PRIVATE
    ${PROJECT_SOURCE_DIR}/src
)

target_compile_options(LabHub PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)