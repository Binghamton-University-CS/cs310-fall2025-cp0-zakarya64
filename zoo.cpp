#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();

   delete animal1;
   AnimalsInZoo zoo;
   Animal elephant("African Elephant", 1758);
   AnimalsInZoo zooWithAnimal(elephant);
   cout << "\n Zoo:" << endl;
   zooWithAnimal.display();
   return 0;
}
