#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 25, b = 25, c = 25, d = 25;

  int total_marks_obtained = a + b + c + d;
  int total_marks = 4 * 100;

  double average_percentage = ((double)total_marks_obtained / 400) * 100;

  cout << average_percentage << endl;

  return 0;
}
