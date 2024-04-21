#include <iostream>

using namespace std;

class A {
  int x = 3;

 public:
  int get_x() { return this->x; }
};

class B : public A {
  int y = 4;

 public:
  int get_y() { return this->y; }
};

class C : public B {
  int z = 5;

 public:
  int get_z() { return this->z; }
};

int main() {
  C c1;

  cout << c1.get_x() << endl;
  cout << c1.get_y() << endl;
  cout << c1.get_z() << endl;

  return 0;
}