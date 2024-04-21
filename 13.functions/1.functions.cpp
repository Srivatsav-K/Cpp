#include <iostream>
#include <vector>

using namespace std;

int sum(int a, int b) { return a + b; }  // declare and define at the top

bool is_even(int num);  // declare at the top

int main() {
  cout << sum(2, 5) << endl;  // 7

  cout << is_even(5) << endl;  // 0

  return 0;
}

bool is_even(int num) {
  return num % 2 == 0 ? true : false;
}  // define at the bottom
