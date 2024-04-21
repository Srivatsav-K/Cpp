#include <iostream>
#include <string>

using namespace std;

int main()
{
  string greet = "Hello world";
  string s1 = "Namaste";
  string s2 = "India";
  cout << greet << endl;

  // Accesing a character
  cout << greet[4] << endl;

  // length()
  cout << greet.length() << endl; // 11

  // push_back() --> can only push a character
  greet.push_back('!');
  cout << greet << endl;

  // pop_back()
  greet.pop_back();
  cout << greet << endl;

  // insert(i,str) --> can insert a string
  greet.insert(5, "!");
  // To insert elements at the begining
  greet.insert(0, " ");
  cout << greet << endl;

  // s1.append(s2)
  cout << s1.append(" " + s2) << endl; // s1 will be modified

  // s1.swap(s2)
  s1.swap(s2);
  cout << s1 << endl  // India
       << s2 << endl; // Namaste India

  return 0;
}