//
// Created by Damir on 10/13/2021.
//

#pragma once
#ifndef UNIVERSITYSYSTEM_STUDENT_H
#define UNIVERSITYSYSTEM_STUDENT_H

#include <iostream>
#include <vector>
#include "Course.h"
#include "ACM.h"
#include <algorithm>
#include <iomanip>

using namespace std;

template<typename activities>
class Student {
public:
    explicit Student(const activities& activity, const string& name = "Unknown", const string& ID = "00000000", int age = 0,
        const vector<Course>& course = { Course(), Course(), Course() }) {
        this->name = name;
        this->course = course;
        this->age = age;
        if (isValidID(ID)) {
            this->ID = ID;
        }
        else {
            this->ID = "00000000";
        }
        this->activity = activity;
    }
    ~Student() = default;

    const string& getName() const {
        return name;
    }
    const string& getID() const {
        return ID;
    }
    int getAge() const {
        return age;
    }
    const vector<Course>& getCourse() const {
        return course;
    }
    const activities& getActivity() const {
        return activity;
    }

    void setName(const string& name) {
        this->name = name;
    }
    void setId(const string& id) {
        this->ID = id;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setCourse(const vector<Course>& course) {
        this->course = course;
    }
    void setActivity(const activities& activity) {
        this->activity = activity;
    }

    friend ostream& operator<<(ostream& os, const Student<activities>& student) {


        os << "Name              ID                 Age    Courses     Activities" << endl;
        os << setfill('-') << setw(68) << "-" << setfill(' ') << "" << left << endl;
        os << setw(18)<< student.name << left << setw(19) << student.ID << left << setw(7)<< student.age << left << setw(12)<< student.course[0].getNameOfTheCourse() << left << student.activity.getName() << endl;
        for (int i = 1; i < student.course.size(); i++) {
            os << setw(44) << " " << student.course[i].getNameOfTheCourse() << '\n';
        }

        return os;
    }
    friend istream& operator>>(istream& is, Student<activities> student) {
        string name;
        string ID;
        int age{};
        vector<Course> courses;
        int numberOfCourses;
        Course course;
        activities activity;

        is >> name;
        is >> ID;
        is >> age;
        cout << numberOfCourses;
        for (int i = 0; i < numberOfCourses; ++i) {
          is >> course;
          courses.push_back(course);
        }
        is >> activity;

        student = Student(activity, name, ID, age, courses);

        return is;
    }

    bool operator==(const Student& student) const {
        bool isCoursesEqual = true;
        const vector<Course>& courses = student.getCourse();
        const vector<Course>& courses1 = this->getCourse();

        for (const Course& course : courses1) {
            if (count(courses.begin(), courses.end(), course) == 0) {
                isCoursesEqual = false;
            }
        }

        bool isIDEqual = this->getID() == student.getID();
        bool isAgesEqual = this->getAge() == student.getAge();
        bool isActivitiesEqual = this->getActivity() == student.getActivity();

        bool isEqual = isCoursesEqual && isIDEqual && isAgesEqual && isActivitiesEqual;

        return isEqual;
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

        return count_if(ID.begin(), ID.end(), [](char ch){return isdigit(ch);}) == 8;
    }
};




#endif //UNIVERSITYSYSTEM_STUDENT_H