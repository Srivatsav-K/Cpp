#include <iostream>

using namespace std;

class A {
  int x;

 public:
  A() { cout << "Default constructor of A" << endl; }

  A(int x) {
    this->x = x;
    cout << "Parameterised constructor of A" << endl;
  }
};
/*
  Note: Only default contructor or parameterised constructor can run from a
  particular class. Ex. A can run either default or parameterised as per how it
  is called.
*/

class B : public A {  // Default constructor of A is called since no params
  int y;

 public:
  B(int y) { this->y = y; }
  // ~B() { cout << "Destructor of B" << endl; }
};

int main() {
  B b1(2);  // Default constructor of A
  return 0;
}