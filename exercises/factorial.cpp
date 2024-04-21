#include <iostream>
using namespace std;

int factorial(int fact)
{
  if (fact <= 1)
  {
    return 1;
  }

  return fact * factorial(fact - 1);
}

int main()
{
  cout << factorial(7) << endl;
  return 0;
}
