//
// Created by Damir on 10/13/2021.
//

#include "Course.h"

Course::Course(string nameOfTheCourse, int numberOfStudentsEnrolled, string lecturer) {
  this->nameOfTheCourse = std::move(nameOfTheCourse);
  this->numberOfStudentsEnrolled = numberOfStudentsEnrolled;
  this->lecturer = std::move(lecturer);
}

Course::~Course() = default;