#include <iostream>

using namespace std;

int main() {
  int num = 5;

  switch (num) {
    // case can have only int, long, char, string
    case 1: {
      cout << "A" << endl;
      break;
    }
    case 2: {
      cout << "B" << endl;
      break;
    }
    case 4:
    case 5:
    case 6: {
      cout << "greater than 4, lesser than 6";
      break;
    }
    default: {
      cout << "default" << endl;
    }
  }
  return 0;
}