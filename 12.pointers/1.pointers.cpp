#include <iostream>

using namespace std;

int main() {
  /*
    & (reference operator) -> gives the memory address of a variable
    *ptr -> used to store the reference in a pointer variable
    ptr -> to access the memory address
    *ptr -> to retrieve and modify the varibale store in that particular address
  */
  double d = 12.233;

  double *ptr = &d;

  cout << &d << endl;    // 0x16d5def20
  cout << ptr << endl;   // 0x16d52af20
  cout << *ptr << endl;  // 12.233 (same as *&d) (deferencing)

  return 0;
}