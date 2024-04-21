#include <iostream>
#include <limits>

using namespace std;

int main()
{
  // Integer
  int num1 = 50;
  long int num2 = 3234234234;
  short int num3 = 5;
  long long int num4 = 2132137812378217;
  cout << sizeof(int) << endl; // 4 bytes . Max int value that can be stored is 2147483647
  cout << INT_MAX << endl;     // 2147483647

  // Float, Double
  float num5 = 7.218937;
  double num6 = 2.3984923847892374;

  // Character
  char currency = '$';              // If characters are provided it's respective ASCII value is stored. If integers are provided min and max range is -128 to 127
  unsigned char positive_num = '1'; // min and max range of an interger is 0 to 255
  cout << sizeof(char) << endl;     // 1 byte
  cout << CHAR_MIN << endl;         // -128
  cout << CHAR_MAX << endl;         // 127
  cout << UCHAR_MAX << endl;        // 255

  // Boolean
  bool isAdmin = true;
  cout << isAdmin << endl;              // 1
  cout << boolalpha << isAdmin << endl; // true
  cout << "Size of bool is : " << sizeof(bool) << endl;

  // Outputs
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;
  cout << num4 << endl;
  cout << num5 << endl;
  cout << num6 << endl;
  cout << currency << endl;
  cout << positive_num << endl;

  return 0;
}