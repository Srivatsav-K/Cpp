#include <iostream>

using namespace std;

int sum_of_n_natutal_num(int n)
{
  return (n * (n + 1)) / 2;
}

int main()
{
  int interval[2] = {1, 5};

  cout << sum_of_n_natutal_num(interval[1]) - sum_of_n_natutal_num(interval[0] - 1) << endl;
  return 0;
}
