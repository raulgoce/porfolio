//clases abstractas 
#include <iostream>
#include <string.h>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHervivoro.h"
using namespace std;

int main(int argc, char** argv) {
	Planta* planta1= new Planta();
	planta1->alimentarse();
	
	AnimalCarnivoro* animalCarnivoro=new AnimalCarnivoro();
	animalCarnivoro->alimentarse();
	
	AnimalHervivoro* animalHervivoro= new AnimalHervivoro();
	animalHervivoro->alimentarse();
	
	return 0;
}
