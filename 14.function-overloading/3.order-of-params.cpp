#include <iostream>

using namespace std;

// function overload --> order of parameters is different

void details(string name, int age) {
  cout << "name : " << name << endl;
  cout << "age : " << age << endl;
}

void details(int age, string name) {
  cout << "age : " << age << endl;
  cout << "name : " << name << endl;
}

int main() {
  details("sri", 23);

  cout << endl;

  details(23, "sri");

  return 0;
}