# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: zoo

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
zoo: zoo.o Animal.o AnimalsInZoo.o
	g++ zoo.o Animal.o AnimalsInZoo.o -o zoo
	

# Specify how the object files should be created from source files
zoo.o: zoo.cpp Animal.h AnimalsInZoo.h
	g++ -c zoo.cpp

Animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp

AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h Animal.h
	g++ -c AnimalsInZoo.cpp
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o zoo
