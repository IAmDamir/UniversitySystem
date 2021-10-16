//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_COURSE_H
#define UNIVERSITYSYSTEM_COURSE_H

#include <iostream>

using namespace std;

class Course {
public:
  explicit Course(string nameOfTheCourse = "Unnamed", int numberOfStudentsEnrolled = 0, string lecturer = "Unknown");
  ~Course();

  friend ostream& operator<<(ostream& os, const Course& course);

  const string &getNameOfTheCourse() const;

  void setNameOfTheCourse(const string &nameOfTheCourse);

  int getNumberOfStudentsEnrolled() const;

  void setNumberOfStudentsEnrolled(int numberOfStudentsEnrolled);

  const string &getLecturer() const;

  void setLecturer(const string &lecturer);

private:
  string nameOfTheCourse;
  int numberOfStudentsEnrolled;
  string lecturer;
};


#endif //UNIVERSITYSYSTEM_COURSE_H
