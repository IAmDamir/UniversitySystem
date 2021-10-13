cmake_minimum_required(VERSION 3.20)
project(UniversitySystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(UniversitySystem main.cpp AllIncludes.h
                Course.cpp Course.h
                Activities/ACM.cpp Activities/ACM.h
                Activities/IEEE.cpp Activities/IEEE.h
                Student.cpp Student.h)
