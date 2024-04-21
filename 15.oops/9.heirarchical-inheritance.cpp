#include <iostream>

using namespace std;

class Animal {
  string name;

 public:
  Animal(string name) { this->name = name; }

  string get_name() { return this->name; }
};

class Dog : public Animal {
  string dog_breed;

 public:
  Dog(string dog_breed, string name) : Animal(name) {
    this->dog_breed = dog_breed;
  }

  string get_dog_breed() { return this->dog_breed; }
};

class Cat : public Animal {
  string cat_breed;

 public:
  Cat(string cat_breed, string name) : Animal(name) {
    this->cat_breed = cat_breed;
  }

  string get_cat_breed() { return this->cat_breed; }
};

int main() {
  Dog d1("German shepheard", "Rocky");
  cout << d1.get_name() << endl;
  cout << d1.get_dog_breed() << endl;

  Cat c1("Persian cat", "Milo");
  cout << c1.get_name() << endl;
  cout << c1.get_cat_breed() << endl;

  return 0;
}