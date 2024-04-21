#include <iostream>

using namespace std;

int main() {
  int roll_nos[5] = {1, 2, 3, 4, 5};

  int ages[] = {21, 22, 23, 24, 25};

  cout << sizeof(roll_nos) << endl;     // 4 bytes 5 elements --> 20 bytes
  cout << sizeof(roll_nos[0]) << endl;  // 4

  return 0;
}