#include <iostream>

using namespace std;

int main()
{
  int num1 = 5;

  int num2 = num1++; // assigned first and then original value is incremented

  cout << num1 << " " << num2 << endl; // num1 -> 6 , num2 -> 5

  cout << num1++ << endl; // 6 but it is incremented by 1 after printing

  int num3 = ++num1; // original value is incremented and assigned. Therefore we get 8

  cout << num3 << endl;

  return 0;
}