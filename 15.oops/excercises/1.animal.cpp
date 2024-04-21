#include <iostream>

using namespace std;

class Animal {
 public:
  string makeSound() { return "Some generic animal sound"; }
};

class Dog : public Animal {
 public:
  string makeSound() { return "Bark"; }
};

class Cat : public Animal {
 public:
  string makeSoud() { return "Meow"; }
};

int main() { return 0; }