#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"

class AnimalsInZoo {
 public:
  AnimalsInZoo(const Animal& animal);
  AnimalsInZoo();
  void display();
 private:
  int numAnimals;
  Animal animal;
};

#endif
