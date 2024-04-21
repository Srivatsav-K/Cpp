#include <iostream>

using namespace std;

// function overloading --> type of parameter is different

void print_age(int age) { cout << "int age is : " << age << endl; }

void print_age(string age) { cout << "string age is : " << age << endl; }

int main() {
  print_age(23);

  print_age("23");

  return 0;
}