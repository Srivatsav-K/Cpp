#include <iostream>

using namespace std;

// class is custom datatype defined by us.
// by default all properties and methods are private
// an object is an instance of a class
class Student {
 public:
  string name = "sri";
  string get_name() {
    return this->name;  // this creates a pointer to the current obj (ex.s1)
  }
};

int main() {
  Student s1;

  cout << s1.name << endl;

  string name = s1.get_name();
  cout << name << endl;

  return 0;
}