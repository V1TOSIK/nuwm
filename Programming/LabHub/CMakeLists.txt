cmake_minimum_required(VERSION 3.20)

project(LabHub)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LabHub
    src/main.cpp

    src/UI/ConsoleUI.cpp

    # Labs infrastructure
    src/Labs/Bootstrap/LabsBootstrap.cpp
    src/Labs/Lab/Lab.cpp
    src/Labs/Registry/LabRegistry.cpp

    # Lab 1
    src/Labs/Lab1/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab1/Task1/Task.cpp
    src/Labs/Lab1/Task1/UI/UI.cpp
    src/Labs/Lab1/Task1/Logic/Logic.cpp

    src/Labs/Lab1/Task2/Task.cpp
    src/Labs/Lab1/Task2/UI/UI.cpp
    src/Labs/Lab1/Task2/Logic/Logic.cpp

    src/Labs/Lab1/Task3/Task.cpp
    src/Labs/Lab1/Task3/UI/UI.cpp

    src/Labs/Lab1/Task4/Task.cpp
    src/Labs/Lab1/Task4/UI/UI.cpp


    # Lab 2
    src/Labs/Lab2/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab2/Task1/Task.cpp
    src/Labs/Lab2/Task1/UI/UI.cpp
    src/Labs/Lab2/Task1/Logic/Logic.cpp

    src/Labs/Lab2/Task2/Task.cpp
    src/Labs/Lab2/Task2/UI/UI.cpp
    src/Labs/Lab2/Task2/Logic/Logic.cpp


    # Lab 3
    src/Labs/Lab3/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab3/Task1/Task.cpp
    src/Labs/Lab3/Task1/UI/UI.cpp
    src/Labs/Lab3/Task1/Logic/Logic.cpp

    src/Labs/Lab3/Task2/Task.cpp
    src/Labs/Lab3/Task2/UI/UI.cpp
    src/Labs/Lab3/Task2/Logic/Logic.cpp

    src/Labs/Lab3/Task3/Task.cpp
    src/Labs/Lab3/Task3/UI/UI.cpp
    src/Labs/Lab3/Task3/Logic/Logic.cpp

    src/Labs/Lab3/Task4/Task.cpp
    src/Labs/Lab3/Task4/UI/UI.cpp
    src/Labs/Lab3/Task4/Logic/Logic.cpp


    # Lab 4
    src/Labs/Lab4/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab4/Task1/Task.cpp
    src/Labs/Lab4/Task1/UI/UI.cpp
    src/Labs/Lab4/Task1/Logic/Logic.cpp

    src/Labs/Lab4/Task2/Task.cpp
    src/Labs/Lab4/Task2/UI/UI.cpp
    src/Labs/Lab4/Task2/Logic/Logic.cpp

    src/Labs/Lab4/Task3/Task.cpp
    src/Labs/Lab4/Task3/UI/UI.cpp
    src/Labs/Lab4/Task3/Logic/Logic.cpp


    # Lab 5
    src/Labs/Lab5/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab5/Task1/Task.cpp
    src/Labs/Lab5/Task1/UI/UI.cpp
    src/Labs/Lab5/Task1/Logic/Logic.cpp

    src/Labs/Lab5/Task2/Task.cpp
    src/Labs/Lab5/Task2/UI/UI.cpp
    src/Labs/Lab5/Task2/Logic/Logic.cpp

    src/Labs/Lab5/Task3/Task.cpp
    src/Labs/Lab5/Task3/UI/UI.cpp
    src/Labs/Lab5/Task3/Logic/Logic.cpp


    # Lab 6
    src/Labs/Lab6/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab6/Task1/Task.cpp
    src/Labs/Lab6/Task1/UI/UI.cpp
    src/Labs/Lab6/Task1/Logic/Logic.cpp

    src/Labs/Lab6/Task2/Task.cpp
    src/Labs/Lab6/Task2/UI/UI.cpp
    src/Labs/Lab6/Task2/Logic/Logic.cpp

    src/Labs/Lab6/Task3/Task.cpp
    src/Labs/Lab6/Task3/UI/UI.cpp
    src/Labs/Lab6/Task3/Logic/Logic.cpp


    # Lab 7
    src/Labs/Lab7/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab7/Task1/Task.cpp
    src/Labs/Lab7/Task1/Logic/Logic.cpp
    src/Labs/Lab7/Task1/UI/UI.cpp

    src/Labs/Lab7/Task2/Task.cpp
    src/Labs/Lab7/Task2/Logic/Logic.cpp
    src/Labs/Lab7/Task2/UI/UI.cpp

    src/Labs/Lab7/Task3/Task.cpp
    src/Labs/Lab7/Task3/Logic/Logic.cpp
    src/Labs/Lab7/Task3/UI/UI.cpp

    src/Labs/Lab7/Task4/Task.cpp
    src/Labs/Lab7/Task4/Logic/Logic.cpp
    src/Labs/Lab7/Task4/UI/UI.cpp


    # Lab 8
    src/Labs/Lab8/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab8/Task1/Task.cpp
    src/Labs/Lab8/Task1/Logic/Logic.cpp
    src/Labs/Lab8/Task1/UI/UI.cpp

    src/Labs/Lab8/Task2/Task.cpp
    src/Labs/Lab8/Task2/Logic/Logic.cpp
    src/Labs/Lab8/Task2/UI/UI.cpp

    src/Labs/Lab8/Task3/Task.cpp
    src/Labs/Lab8/Task3/Logic/Logic.cpp
    src/Labs/Lab8/Task3/UI/UI.cpp


    # Lab 9
    src/Labs/Lab9/Bootstrap/LabBootstrap.cpp

    src/Labs/Lab9/Task1/Task.cpp
    src/Labs/Lab9/Task1/Logic/Logic.cpp
    src/Labs/Lab9/Task1/UI/UI.cpp

    src/Labs/Lab9/Task2/Task.cpp
    src/Labs/Lab9/Task2/Logic/Logic.cpp
    src/Labs/Lab9/Task2/UI/UI.cpp
)

target_include_directories(LabHub PRIVATE
    ${PROJECT_SOURCE_DIR}/src
)

target_compile_options(LabHub PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)