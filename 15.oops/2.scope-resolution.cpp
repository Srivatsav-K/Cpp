#include <iostream>

using namespace std;

class Student {
 public:
  void print();
};

// can define a method outside of class using scope resolution
void Student::print() { cout << "Hello student" << endl; }

int main() {
  Student s1;

  s1.print();

  // print();  // undefined

  return 0;
}
