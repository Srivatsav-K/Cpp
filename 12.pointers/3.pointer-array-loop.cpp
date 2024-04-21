#include <iostream>

using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  int size = sizeof(arr) / sizeof(arr[0]);

  int *ptr = &arr[0];

  cout << ptr << endl;      // 0x16b7c6ef0
  cout << ptr + 1 << endl;  // 0x16b7c6ef4

  cout << *ptr << endl;        // 1
  cout << *(ptr + 1) << endl;  // 2
  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << ptr + i << " : ";
    cout << *(ptr + i) << endl;
  }

  /*
    0x16b19eef0 : 1
    0x16b19eef4 : 2
    0x16b19eef8 : 3
    0x16b19eefc : 4
    0x16b19ef00 : 5
  */

  return 0;
}