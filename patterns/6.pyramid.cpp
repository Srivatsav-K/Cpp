#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  /*
    N = 3
      *
     ***
    *****
  */

  for (int i = 1; i <= n; i++)
  {
    // spaces
    for (int k = n - 1; k >= i; k--)
    {
      cout << " ";
    }

    // stars
    for (int j = 1; j <= ((2 * i) - 1); j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}