#include <iostream>

using namespace std;

int main()
{
  char msg[12]; // Should account for null character at the end as well

  cin.get(msg, 12); // Should account for null character at the end as well

  cout << msg << endl;

  return 0;
}