#include <iostream>
using namespace std;
int main()
{
  // boolean input boolean output
  bool condition1 = (2 >= 5) && (7 != 6);
  cout << condition1 << endl;

  // bool condition2 = 2 && 5; // !wrong as 2 operands must also be boolean values
  bool condition2 = (2 != 0) && (5 != 0);
  cout << condition2 << endl;

  bool condition3 = false || true;
  cout << boolalpha << condition3 << endl;

  bool condition4 = !0;
  cout << condition4 << endl; // true
  return 0;
}
