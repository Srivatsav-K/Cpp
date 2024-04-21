#include <iostream>

using namespace std;

class Dog {
  string name;
  string species;
  string breed;

 public:
  Dog(string name, string species, string breed) {
    this->name = name;
    this->species = species;
    this->breed = breed;
  };

  string getBreed() { return this->breed; }
};

int main() {
  Dog d1("stalin", "mammal", "german shepheard");

  cout << d1.getBreed() << endl;

  return 0;
}