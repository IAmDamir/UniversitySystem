//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_STUDENT_H
#define UNIVERSITYSYSTEM_STUDENT_H

#include "AllIncludes.h"
#include "Course.h"

template<typename Activities>
class Student {
public:
  explicit Student(const string& name = "Unknown", const string& ID = "000000000", int age = 0,
                   const Course& course = Course(), const Activities& activity = Activities());
  ~Student();

  const string &getName() const;

  void setName(const string &name);

  const string &getId() const;

  void setId(const string &id);

  int getAge() const;

  void setAge(int age);

  const Course &getCourse() const;

  void setCourse(const Course &course);

  Activities getActivity() const;

  void setActivity(Activities activity);

private:
  string name;
  string ID;
  int age;
  Course course;
  Activities activity;

  bool isValidID(const string& ID);
};




#endif //UNIVERSITYSYSTEM_STUDENT_H
