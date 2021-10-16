#include <iostream>
#include "Activities/ACM.h"
#include "Student.h"

using namespace std;

int main() {
  ACM acm;
  Student<ACM> student{acm};
  std::cout << student;

  return 0;
}
