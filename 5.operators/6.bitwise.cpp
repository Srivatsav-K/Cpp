#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  // Known as bitwise becase the decimal is converted to binary and operation is performed by check each bit

  int num1 = 5;
  int num2 = 9;

  /*
    0101
    1001 &
    ----
    0001
    ----
  */
  int bitwise_and = num1 & num2;
  cout << bitwise_and << endl;

  int bitwise_or = num1 | num2;
  cout << bitwise_or << endl; // 1101 -> 13

  /*
    0101
    1001 ^
    ----
    1100
    ----
  */
  int bitwise_xor = num1 ^ num2;
  cout << bitwise_xor << endl; // 8 + 4 + 0 + 0 = 12
  return 0;
}
