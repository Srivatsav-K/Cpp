#include <iostream>

using namespace std;

void pass_by_val(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void pass_by_ref(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 5;
  int b = 10;

  pass_by_val(a, b);

  cout << "value of a pass by value : " << a << endl;
  cout << "value of b pass by value : " << b << endl;

  cout << endl;

  pass_by_ref(&a, &b);

  cout << "value of a pass by reference : " << a << endl;
  cout << "value of b pass by reference : " << b << endl;

  return 0;
}