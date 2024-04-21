#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacci(int n)
{
  vector<int> result = {0, 1};

  for (int i = 2; i <= n; i++)
  {
    result.push_back(result[i] + result[i - 1]);
  }

  return result;
}

// void printVector(vector<int> vec)
// {
//   for (int i = 0; i < vec.size(); i++)
//   {
//     std::cout << i << " ";
//   }
// }

int main()
{
  fibonacci(5);
  return 0;
}
