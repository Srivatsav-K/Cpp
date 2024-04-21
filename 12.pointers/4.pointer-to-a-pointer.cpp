#include <iostream>

using namespace std;

int main() {
  int num = 12;

  int *ptr1 = &num;
  int **ptr2 = &ptr1;

  cout << *ptr1 << endl;   // 12
  cout << ptr1 << endl;    // 0x16bc12f08
  cout << *ptr2 << endl;   // 0x16bc12f08
  cout << **ptr2 << endl;  // 12

  return 0;
}