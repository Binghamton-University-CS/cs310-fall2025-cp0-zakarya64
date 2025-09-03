#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(const Animal& animal) : animal(animal), numAnimals(1) {}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}

void AnimalsInZoo::display() {
  cout << "Animals: " << numAnimals << endl;
  if (numAnimals > 0) {
    animal.display();
  }
}
