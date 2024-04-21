#include <iostream>

using namespace std;

// function overloading --> same function name but the no.of parameters are
// different

void greet(string name) { cout << name << endl; }

void greet(string msg, string name) { cout << msg << " " << name << endl; }

int main() {
  greet("Sri");

  greet("Hello", "Sri");

  return 0;
}