#include <iostream>

using namespace std;

class A {
 public:
  void func() { cout << "In class A" << endl; }
};

class B : public A {
 public:
  void func() { cout << "In class B" << endl; }
};

int main() {
  B b1;
  b1.func();     // In class B (func in child is given preference)
  b1.A::func();  // if we want func from A, use scope resolution

  return 0;
}