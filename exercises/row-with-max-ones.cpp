/*
  Given a binary matrix, you have to find the row with the maximum number of 1s.
  If there are more than one rows with maximum one's then return the first one.

  Input: arr = [[1,1,1],[0,0,0],[0,0,0]], r = 3, c = 3
  Output: 0
  Explanation:
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> arr = {{1, 1, 1}, {0, 0, 0}, {0, 0, 0}};
  int r = 3;
  int c = 3;

  int row = 0;
  int count = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    int temp = 0;

    for (int j = 0; j < arr[i].size(); j++)
    {
      if (arr[i][j] == 1)
      {
        temp += 1;
      }
    }

    if (temp > count)
    {
      count = temp;
      row = i;
    }
  }

  return 0;
}