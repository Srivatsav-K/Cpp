#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  /*
    N=4
    ****
    ***
    **
    *
  */

  for (int i = n; i > 0; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  cout << "OR" << endl;

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}