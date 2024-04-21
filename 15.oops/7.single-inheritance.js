class Animal {
  #name;
  #species;

  constructor(name, species) {
    this.#name = name;
    this.#species = species;
  }

  getName() {
    return this.#name;
  }

  getSpecies() {
    return this.#species;
  }
}

class Dog extends Animal {
  #breed;
  constructor(species, breed, name) {
    super(name, species);
    this.#breed = breed;
  }

  getBreed() {
    return this.#breed;
  }
}

const d1 = new Dog("Dog", "German shepherd", "Rocky");

console.log(d1.getSpecies());
console.log(d1.getBreed());
console.log(d1.getName());
