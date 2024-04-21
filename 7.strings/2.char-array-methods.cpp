#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char s1[6] = "Hello";
  char s2[6] = "World";
  char s3[6];

  // strlen()
  cout << strlen(s1) << endl; // 5

  // strcpy(to,from)
  cout << strcpy(s3, s1) << endl; // Hello
  cout << s3 << endl;             // Hello

  // strcat(s1,s2)
  cout << strcat(s1, s2) << endl; // HelloWorld

  // strcmp(s1,s2)
  /*
    s1 > s2 = 1
    s2 > s1 = -1
    s1 == s2 = 0
  */
  cout << strcmp("a", "b") << endl;         // -1 ASCII of b > ASCII of a
  cout << strcmp("aab", "aaa") << endl;     // 1
  cout << strcmp("Hello", "World") << endl; // -1
  cout << strcmp(s1, s2) << endl;           // -15 Why?
  return 0;
}