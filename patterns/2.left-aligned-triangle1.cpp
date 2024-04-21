#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  /*
   *
   **
   ***
   */
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  /*
    1
    22
    333
  */
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }

  /*
    1
    12
    123
  */
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }

  /*
    2
    24
    246
  */
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j * 2;
    }
    cout << endl;
  }

  return 0;
}