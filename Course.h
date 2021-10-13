//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_COURSE_H
#define UNIVERSITYSYSTEM_COURSE_H

#include "AllIncludes.h"

class Course {
public:
  explicit Course(string nameOfTheCourse = "Unnamed", int numberOfStudentsEnrolled = 0, string lecturer = "Unknown");
  ~Course();


private:
  string nameOfTheCourse;
  int numberOfStudentsEnrolled;
  string lecturer;
};


#endif //UNIVERSITYSYSTEM_COURSE_H
