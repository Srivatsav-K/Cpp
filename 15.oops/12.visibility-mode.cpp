#include <iostream>
using namespace std;

class A {
 private:
  int x;

 protected:
  int y;

 public:
  int z;
};

class B : public A {
  // x is private, y is protected, z is public (Access: y and z)
  void access() {
    // x=4; //Error
    y = 5;
    z = 6;
  }
};

class C : private A {
  // x is private, y is private, z is private (Access: y and z)
};

class D : protected A {
  // x is private, y is protected, z is protected (Access: y and z)
};

int main() {}