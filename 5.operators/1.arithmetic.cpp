#include <iostream>

using namespace std;

int main()
{
  int num1 = 5;
  int num2 = 2;

  // Binary operators because we need 2 operands to perform operations
  cout << num1 + num2 << endl;
  cout << num1 - num2 << endl;
  cout << num1 * num2 << endl;
  cout << num1 / num2 << endl;         // not 2.5 but 2 since it is (int)/(int)
  cout << num1 / (double)num2 << endl; // 2.5 (int)/(double)
  cout << num1 % num2 << endl;         // 1

  return 0;
}