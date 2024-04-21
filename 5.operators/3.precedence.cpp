#include <iostream>

using namespace std;

int main()
{
  // Precensence -> * / % over + -
  // Associativity -> LEft to right if there are no brackets

  int precendence = 2 + 5 * 3; // 2 + 15
  cout << precendence << endl; // 17

  double associativity = (double)2 * 3 / 5; // (2 * 3) / 5
  cout << associativity << endl;            // 1.2

  return 0;
}