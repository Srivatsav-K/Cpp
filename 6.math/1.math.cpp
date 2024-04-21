#include <cmath>
#include <iostream>

using namespace std;

int main() {
  cout << M_PI << endl;
  cout << M_E << endl;  // e^1 = 2.71828

  cout << pow(2, 3) << endl;
  cout << sqrt(4) << endl;
  cout << cbrt(8) << endl;

  cout << min(5, 3) << endl;
  cout << max(8, 7) << endl;

  cout << floor(2.9) << endl;
  cout << ceil(2.1) << endl;
  cout << round(5.1) << endl;
  cout << abs(-15) << endl;

  cout << floor(-2.6) << endl;  // -3
  cout << ceil(-2.6) << endl;   // -2

  cout << (int)-2.9 << endl;  //-2

  return 0;
}