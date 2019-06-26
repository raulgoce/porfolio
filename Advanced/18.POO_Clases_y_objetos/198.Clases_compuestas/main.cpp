//Clases compuestas


#include <iostream>
#include <string.h>
#include "Estudiante.h"
using namespace std;


int main(int argc, char** argv) {
	Estudiante *nuevo_estudiante=new Estudiante("234D",15.6,56,"Calle Aragon 123");
	nuevo_estudiante->mostrarDatos();
	return 0;
}
