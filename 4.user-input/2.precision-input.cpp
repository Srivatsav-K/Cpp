#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double precision_input;

  // cout << sizeof(2.324234234234) << endl; // 8

  cin >> precision_input;

  cout << fixed << setprecision(2) << precision_input << endl;

  return 0;
}