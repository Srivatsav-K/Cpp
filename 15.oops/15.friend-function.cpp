#include <iostream>

using namespace std;

/*
  In C++, a friend function is a function that is not a member of a class but is
  granted access to the private and protected members of that class.
*/
class Box {
 private:
  int length;

 public:
  Box(int length) { this->length = length; }

  friend void print_length(Box b);
};

void print_length(Box b) {
  // can access private and protected members of the class
  cout << b.length << endl;
};

int main() {
  Box b1(5);

  print_length(b1);

  return 0;
}