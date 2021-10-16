////
//// Created by Damir on 10/13/2021.
////
//
//#include "Student.h"
//
///*template<class activities>
//Student<activities>::Student(const activities& activity, const string& name, const string& ID, int age,
//                             const Course& course) {
//  this->name = name;
//  this->course = course;
//  this->age = age;
//  if (isValidID(ID)) {
//    this->ID = ID;
//  } else {
//    this->ID = "00000000";
//  }
//  this->activity = activity;
//}*/
//
//template<class activities>
//Student<activities>::~Student() = default;
//
////template<class activities>
////bool Student<activities>::isValidID(const string& ID) {
////  if (ID.size() != 8) {
////    return false;
////  }
////
////  //return all_of(ID[0], ID[7], [](char ch){return isdigit(ch);});
////
////  for (char ch : ID) {
////    if (!isdigit(ch)) {
////      return false;
////    }
////  }
////
////  return true;
////}
//
//template<class activities>
//const string &Student<activities>::getName() const {
//  return name;
//}
//template<class activities>
//const string &Student<activities>::getId() const {
//  return ID;
//}
//template<class activities>
//int Student<activities>::getAge() const {
//  return age;
//}
//template<class activities>
//const Course &Student<activities>::getCourse() const {
//  return course;
//}
//template<class activities>
//activities Student<activities>::getActivity() const {
//  return activity;
//}
//
//template<class activities>
//void Student<activities>::setName(const string &name) {
//  this->name = name;
//}
//template<class activities>
//void Student<activities>::setId(const string &id) {
//  this->ID = id;
//}
//template<class activities>
//void Student<activities>::setAge(int age) {
//  this->age = age;
//}
//template<class activities>
//void Student<activities>::setCourse(const Course &course) {
//  this->course = course;
//}
//template<class activities>
//void Student<activities>::setActivity(activities activity) {
//  this->activity = activity;
//}
//
////template<class activities>
////ostream &operator<<(ostream &out, Student<activities> student) {
////  out << student.getActivity();
////
////  return out;
////}
////template<class activities>
////istream &operator>>(istream &in, Student<activities> student) {
////
////
////  return in;
////}
