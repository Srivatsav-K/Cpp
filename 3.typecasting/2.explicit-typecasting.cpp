#include <iostream>

using namespace std;

int main()
{
  // explicit  / narrowing typecasting
  // decreasing the size (data loss) --> double to int
  // compiler cannot automatically do. THerefore we have to explicitly tell

  double sales = 98.990;
  int sales_in_int = (int)sales; // 98
  cout << sales_in_int << endl;

  cout << (bool)1 << endl;   // 1
  cout << (bool)-1 << endl;  // 1
  cout << (bool)0 << endl;   // 0
  cout << (int)'$' << endl;  // ASCII of $ -> 36
  cout << (int)true << endl; // 1

  return 0;
}