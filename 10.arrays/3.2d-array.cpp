#include <iostream>

using namespace std;

int main() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

  int r = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < r; i++) {
    int c = sizeof(arr[i]) / sizeof(arr[i][0]);
    for (int j = 0; j < c; j++) {
      cout << arr[i][j] << endl;
    }
  }

  return 0;
}