#include <iostream>

using namespace std;

int main() {
  int ages[5];

  int size = sizeof(ages) / sizeof(ages[0]);

  for (int i = 0; i < size; i++) {
    cout << "Enter " << i << "th element : ";
    cin >> ages[i];
  }

  // Print the array
  cout << "[";
  for (int i = 0; i < size; i++) {
    if (i < size - 1) {
      cout << ages[i] << ",";
    } else {
      cout << ages[i];
    }
  }
  cout << "]" << endl;

  return 0;
}