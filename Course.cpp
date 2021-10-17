//
// Created by Damir on 10/13/2021.
//

#include "Course.h"
#include <iomanip>

Course::Course(string nameOfTheCourse, int numberOfStudentsEnrolled, string lecturer) {
	this->nameOfTheCourse = std::move(nameOfTheCourse);
	this->numberOfStudentsEnrolled = numberOfStudentsEnrolled;
	this->lecturer = std::move(lecturer);
}

ostream& operator<<(ostream& os, const Course& course) {

	os << "Name          Lecturer             Number of students\n";
	os << setfill('-') << setw(68) << "-" << setfill(' ') << "" << left << endl;
	os << setw(14) << course.getNameOfTheCourse() << left << setw(21) << course.getLecturer() << left << setw(7) << course.getNumberOfStudentsEnrolled() << left << endl;

	return os;
}

istream &operator>>(istream &is, Course &course) {
  string nameOfTheCourse;
  int numberOfStudentsEnrolled;
  string lecturer;

  is >> nameOfTheCourse;
  is >> numberOfStudentsEnrolled;
  is >> lecturer;

  course = Course(nameOfTheCourse, numberOfStudentsEnrolled, lecturer);

  return is;
}

int Course::getNumberOfStudentsEnrolled() const {
	return numberOfStudentsEnrolled;
}

const string& Course::getNameOfTheCourse() const {
	return nameOfTheCourse;
}

const string& Course::getLecturer() const {
	return lecturer;
}

void Course::setNumberOfStudentsEnrolled(int numberOfStudentsEnrolled) {
	Course::numberOfStudentsEnrolled = numberOfStudentsEnrolled;
}

void Course::setNameOfTheCourse(const string& nameOfTheCourse) {
	Course::nameOfTheCourse = nameOfTheCourse;
}

void Course::setLecturer(const string& lecturer) {
	Course::lecturer = lecturer;
}

bool Course::operator==(const Course &course) const {
  bool isNumberOfStudentsEnrolledEqual = this->getNumberOfStudentsEnrolled() == course.getNumberOfStudentsEnrolled();
  bool isNameOfTheCourseEqual = this->getNameOfTheCourse() == course.getNameOfTheCourse();
  bool isLecturerEqual = this->getLecturer() == course.getLecturer();

  bool isEqual = isNumberOfStudentsEnrolledEqual && isNameOfTheCourseEqual && isLecturerEqual;

  return isEqual;
}

Course::~Course() = default;