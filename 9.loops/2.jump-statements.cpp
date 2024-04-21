#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 11; i++) {
    if (i % 2 == 0) {
      cout << "continue" << endl;
      continue;
    } else {
      cout << i << endl;
    }
  }

  cout << endl;

  for (int i = 10; i >= 0; i--) {
    if (i == 5) {
      break;
    } else {
      cout << i << endl;
    }
  }
  cout << "break" << endl;

  return 0;
}