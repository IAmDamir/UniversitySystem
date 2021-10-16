//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_STUDENT_H
#define UNIVERSITYSYSTEM_STUDENT_H

#include <iostream>
#include "Course.h"
#include "Activities/ACM.h"
#include "Activities/Activities.h"

using namespace std;

template<typename activities>
class Student {
public:
  explicit Student(const activities& activity, const string& name = "Unknown", const string& ID = "00000000", int age = 0,
                   const Course& course = Course()) {
    this->name = name;
    this->course = course;
    this->age = age;
    if (isValidID(ID)) {
      this->ID = ID;
    } else {
      this->ID = "00000000";
    }
    this->activity = activity;
  }
  ~Student() = default;

  const string &getName() const {
  return name;
}
  const string &getID() const {
  return ID;
}
  int getAge() const {
  return age;
}
  const Course &getCourse() const {
  return course;
}
  const activities &getActivity() const {
  return activity;
}

  void setName(const string &name) {
  this->name = name;
}
  void setId(const string &id) {
  this->ID = id;
}
  void setAge(int age) {
  this->age = age;
}
  void setCourse(const Course &course) {
  this->course = course;
}
  void setActivity(const activities& activity) {
  this->activity = activity;
}

  friend ostream& operator<<(ostream& out, const Student<activities> &student) {
    out << "The Name of student is: " << student.getName() << endl;
    out << "The ID of student is: " << student.getID() << endl;
    out << "The Age of student is: " << student.getAge() << endl;
    out << student.getCourse();
    out << student.getActivity();

    return out;
  }
  friend istream& operator>>(istream& in, Student<activities> student) {
    return in;
  }

private:
  string name;
  string ID;
  int age{};
  Course course;
  activities activity;

  bool isValidID(const string& ID) {
    if (ID.size() != 8) {
      return false;
    }

    return all_of(ID.begin(), ID.end(), [](const char& ch){return isdigit(ch);});
  }
};




#endif //UNIVERSITYSYSTEM_STUDENT_H
