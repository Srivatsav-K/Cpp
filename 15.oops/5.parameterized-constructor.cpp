#include <iostream>

using namespace std;

class Student {
  string name;
  int age;

 public:
  Student() { cout << "This is the default constructor" << endl; }

  Student(string name, int age) {
    // age = age;          This cannot be done as age variable already defined;
    this->name = name;  // this : pointer to current obj
    this->age = age;
  }

  void print() {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
  }
};

int main() {
  Student s1("sri", 23);  // default constructor is not called

  s1.print();

  return 0;
}