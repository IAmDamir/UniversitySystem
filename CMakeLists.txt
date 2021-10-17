cmake_minimum_required(VERSION 3.20)
project(UniversitySystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleApplication11 main.cpp AllIncludes.h
        Course.cpp Course.h
        ACM.cpp ACM.h
        IEEE.cpp IEEE.h
        Student.cpp Student.h)
