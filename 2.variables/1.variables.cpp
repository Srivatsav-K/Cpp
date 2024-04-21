#include <iostream>

using namespace std;

int main()
{
  // syntax ->  datatype variable_name = value;
  int age = 0;
  age = 23;

  // constants
  const int dob = 2000;

  cout << age << " " << dob << endl;  // 23 2000
  cout << age << "\t" << dob << endl; // 23      2000

  // declaring multiple variables of same type
  int england = 256, australia = 300;

  // un-declared variable
  int undeclared;
  cout << undeclared << endl; // random garbage value in memory for ex : 83450128

  return 0;
}