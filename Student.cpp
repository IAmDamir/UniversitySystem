//
// Created by Damir on 10/13/2021.
//

#include "Student.h"

template<typename Activities>
Student<Activities>::Student(const string& name, const string& ID, int age,
                             const Course& course, const Activities& activity) {
  this->name = name;
  this->ID = ID;
  this->age = age;
  if (isValidID(ID)) {
    this->course = course;
  } else {
    this->course = "00000000";
  }
  this->activity = move(activity);
}

template<typename Activities>
Student<Activities>::~Student() {
  delete activity;
}

template<typename Activities>
bool Student<Activities>::isValidID(const string& ID) {
  if (ID.size() != 8) {
    return false;
  }

  for (char ch : ID) {
    if (!isdigit(ch)) {
      return false;
    }
  }

  return true;
}

template<typename Activities>
const string &Student<Activities>::getName() const {
  return name;
}
template<typename Activities>
const string &Student<Activities>::getId() const {
  return ID;
}
template<typename Activities>
int Student<Activities>::getAge() const {
  return age;
}
template<typename Activities>
const Course &Student<Activities>::getCourse() const {
  return course;
}
template<typename Activities>
Activities Student<Activities>::getActivity() const {
  return activity;
}

template<typename Activities>
void Student<Activities>::setName(const string &name) {
  Student::name = name;
}
template<typename Activities>
void Student<Activities>::setId(const string &id) {
  ID = id;
}
template<typename Activities>
void Student<Activities>::setAge(int age) {
  Student::age = age;
}
template<typename Activities>
void Student<Activities>::setCourse(const Course &course) {
  Student::course = course;
}
template<typename Activities>
void Student<Activities>::setActivity(Activities activity) {
  Student::activity = activity;
}
