cmake_minimum_required(VERSION 3.20)
project(UniversitySystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(UniversitySystem main.cpp
                Course.cpp Course.h
        Activities/ACM.cpp Activities/ACM.h
                Activities/IEEE.cpp Activities/IEEE.h
        Student_impl.h Student.h)
