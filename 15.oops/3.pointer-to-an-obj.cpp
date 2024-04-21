#include <iostream>

using namespace std;

class Student {
 public:
  string name = "sri";
  void print_name() { cout << name << endl; }
};

int main() {
  Student s1, s2, s3;

  cout << s1.name << endl;
  s2.print_name();

  Student *s1_ptr = &s1;
  // to access properties of a pointer to an obj use ->
  cout << s1_ptr->name << endl;
  s1_ptr->print_name();

  return 0;
}