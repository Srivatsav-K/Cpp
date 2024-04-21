#include <iostream>

using namespace std;

int main()
{
  // ways of declaring string as character array

  // String literal syntax
  char message[6] = "Hello"; // size = length of string + 1 (null character (\0). It is added by the compiler)

  char message1[] = "Hello"; // size is inferred

  /*
    Error -> we cannot declare without specifying the size
    char message2[];
    message2 = "Hello";
  */

  // Array syntax
  char message3[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // \0 must be manually added
  cout << message3 << endl;

  char message4[] = {'H', 'e', 'l', 'l', 'o', '\0', 'z'};
  cout << message4 << endl; // Hello (z wont be printed as it is present after null character. Compiler will terminate as soon as it encounters a \0)

  // Accessing a character in a string
  cout << message[0] << endl; // H

  return 0;
}