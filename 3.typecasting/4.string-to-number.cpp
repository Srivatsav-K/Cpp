#include <iostream>

using namespace std;

int main()
{
  string age_str = "23";
  int age_num = stoi(age_str);

  cout << age_num + 2 << endl;
  return 0;
}