#include <iostream>

using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  /*
    In C++, when we use the array name without an index, it implicitly
    represents the memory address (or pointer) of the first element. This is
    known as array-to-pointer decay.
  */
  cout << arr << endl;  // 0x16b342f10

  int *arr_0 = &arr[0];  // 0x16b342f10
  cout << arr_0 << endl;

  cout << *arr << endl;    // 1
  cout << *arr_0 << endl;  // 1

  return 0;
}