#include <iostream>
#include "ACM.h"
#include "IEEE.h"
#include "Student.h"
#include "Course.h"

using namespace std;

int main() {
	ACM acm;
	IEEE ieee;
	Student<ACM> student{ acm };
	cout << student;
	cout << endl;

	Student<IEEE> student2{ ieee };
	cout << student2;
	cout << endl;

	Course course1("Math", 15, "Name Lastname");
	Student<ACM> student3(acm, "Yerassyl Amanbek", "12345678", 25, { course1, course1, course1 });
	cout << student3;
	cout << endl;
	cout << course1;
	cout << acm;
	cout << ieee;

  if (student == student3) {
    cout << "true";
  } else {
    cout << "false";
  }
	return 0;
}