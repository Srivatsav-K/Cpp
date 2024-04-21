#include <iostream>

using namespace std;

class Student {
  string school = "MVM";

 public:
  // automatically called when an obj is created
  // same name as class
  // no return type
  Student() { cout << school << endl; }
};

int main() {
  Student s1;  // MVM

  return 0;
}