/* 3.Defina una plantilla para la clase Materia, de tal manera que el tipo
de dato del atributo calificacion sea del tipo T. Esto permitira crear objetos
de tipo materia que tengan calificaciones que sea: numeros enteros, 
numeros decimales y letras. */

#include <iostream>
#include "Materia.h"
using namespace std;

int main(int argc, char** argv) {

	Materia <int> curso1("C++",213,7);
	Materia <float> curso2("Matematicas",42,6.5);
	Materia <char> curso3 ("Fisica",342,'A');
	
	cout<<"Mostrando datos del curso 1: "<<endl;
	curso1.mostrarDatos();
	
	cout<<"Mostrando datos del curso 2: "<<endl;
	curso2.mostrarDatos();	
	
	cout<<"Mostrando datos del curso 3: "<<endl;
	curso3.mostrarDatos();
	
	cout<<"Cambiando calificacion de C++: "<<endl;
	curso1.setCalificacion(10);
	cout<<"La nueva calificacion es: "<<curso1.getCalificacion();	
	return 0;
}
