#include <iostream>

using namespace std;

class A {
 private:
  int x = 2;  // can only be accessed in the current class

 protected:
  int y = 3;  // can only be accessed by child classes

 public:
  int z = 4;  // can be accessed globally
};

class B : public A {
 public:
  int k = 5;
  void get_y() { cout << y << endl; }
  void get_z() { cout << z << endl; }
};

int main() {
  A a1;
  cout << a1.z << endl;  // 4

  B b1;
  cout << b1.z << endl;  // 4
  cout << b1.k << endl;  // 5
  b1.get_y();            // 3
  b1.get_z();            // 4

  return 0;
}