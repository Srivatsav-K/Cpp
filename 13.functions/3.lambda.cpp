#include <iostream>

using namespace std;

auto add = [](int a, int b) -> int { return a + b; };

int main() {
  int sum = add(2, 3);
  cout << sum << endl;
  return 0;
}