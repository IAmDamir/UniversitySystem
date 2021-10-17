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

	//os << "The Course of student is: " << course.getNameOfTheCourse() << endl;
	//os << "The name of the lecturer of this course is: " << course.getLecturer() << endl;
	//os << "The number of the students of this course is: " << course.getNumberOfStudentsEnrolled() << endl;

	return os;
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

Course::~Course() = default;