#include <iostream>

using namespace std;

class Animal {
  string name;
  string species;

 public:
  Animal(string name, string species) {
    this->name = name;
    this->species = species;
  }

  string get_name() { return this->name; }

  string get_species() { return this->species; }
};

class Dog : public Animal {
  string breed;

 public:
  Dog(string breed, string name, string species) : Animal(name, species) {
    this->breed = breed;
  }

  string get_breed() { return this->breed; }
};

int main() {
  Dog d1("German shepheard", "Rocky", "Dog");

  cout << d1.get_species() << endl;
  cout << d1.get_breed() << endl;
  cout << d1.get_name() << endl;

  return 0;
}