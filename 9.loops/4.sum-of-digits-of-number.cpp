#include <iostream>

using namespace std;

int main() {
  int num = 15213;
  int sum = 0;

  while (num > 0) {
    sum += num % 10;
    num = num / 10;
    cout << "sum : " << sum << endl << "num : " << num << endl;
  }

  cout << sum << endl;

  /*
    for (int i = num; i > 0; i = i / 10) {
      sum += i % 10;
    }
    cout << sum << endl;
  */

  return 0;
}