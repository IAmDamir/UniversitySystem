//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_STUDENT_H
#define UNIVERSITYSYSTEM_STUDENT_H

#include <iostream>
#include <vector>
#include "Course.h"
#include "Activities/ACM.h"

using namespace std;

template<typename activities>
class Student {
public:
  explicit Student(const activities& activity, const string& name = "Unknown", const string& ID = "00000000", int age = 0,
                   const vector<Course>& course = {Course()}) {
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
  const vector<Course> &getCourse() const {
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
  void setCourse(const vector<Course> &course) {
  this->course = course;
}
  void setActivity(const activities& activity) {
  this->activity = activity;
}

  friend ostream& operator<<(ostream& os, const Student<activities> &student) {


      os << "Name              ID                 Age    Courses     Activities\n";
      os << "------------------------------------------------------------------\n";
      os << student.name << "      " << student.ID << "     " << student.age << "   " << student.course[0] << "   " << student.activity << '\n';
      for (int i = 1; i < student.course.size(); i++) {
        os << "                                           " << student.course[i] << '\n';
      }

      return os;
    /*
    os << "The Name of student is: " << student.getName() << endl;
    os << "The ID of student is: " << student.getID() << endl;
    os << "The Age of student is: " << student.getAge() << endl;
    vector<Course> courses = student.getCourse();
    const auto f = [&os](const Course& course){};
    os << student.getCourse();
    os << student.getActivity();

    return os;
     */
  }
  friend istream& operator>>(istream& is, Student<activities> student) {
    return is;
  }

private:
  string name;
  string ID;
  int age{};
  vector<Course> course;
  activities activity;

  bool isValidID(const string& ID) {
    if (ID.size() != 8) {
      return false;
    }

    return all_of(ID.begin(), ID.end(), [](const char& ch){return isdigit(ch);});
  }
};




#endif //UNIVERSITYSYSTEM_STUDENT_H
