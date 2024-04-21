#include <iostream>

using namespace std;

int main()
{
  // Typecasting -> changing the dataype of a variable. Can only be done on primitive datatypes

  // Implicit / Widening typecasting --> int to double
  // No data loss
  // compiler does automatically

  int age = 23;               // 4 bytes
  double age_in_double = age; // 8 bytes

  cout << age_in_double << endl;         // 23
  cout << sizeof(age_in_double) << endl; // 8
  return 0;
}