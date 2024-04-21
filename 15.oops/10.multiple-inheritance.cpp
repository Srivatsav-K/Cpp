#include <iostream>

using namespace std;

class A {
  int x = 1;

 public:
  int get_x() { return this->x; }
  int get_num() { return this->x; }
};

class B {
  int y = 2;

 public:
  int get_y() { return this->y; }
  int get_num() { return this->y; }
};

// inherit from 2 different classes
class C : public A, public B {
  int z = 3;
};

int main() {
  C c1;
  cout << c1.get_x() << endl;
  cout << c1.get_y() << endl;

  /*
  if same function name is present we need to tell which function from which
  class needs to be executed using scope resolution
  For ex this is not valid : //! c1.get_num(); //"C::get_num" is ambiguous
  */
  cout << c1.A::get_num() << endl;
  cout << c1.B::get_num() << endl;
  return 0;
}