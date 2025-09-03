#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(string speciesName, unsigned int discoveryYear) {
  species = speciesName;
  year_discovered = discoveryYear;
}

Animal::Animal() : species(""), year_discovered(0) {}

void Animal::display() {
  cout << species << " [" << year_discovered << "]" << endl;
}
