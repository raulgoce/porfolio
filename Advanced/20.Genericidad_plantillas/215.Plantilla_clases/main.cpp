
#include <iostream>
#include "EjemploPlantilla.h"
using namespace std;

int main(int argc, char** argv) {
	EjemploPlantilla <int, float> objeto1(5,9.87);//para clases debemos poner los tipos de datos que va a recoger
	objeto1.mostrarDatos();
	
	//cambiamos los datos
	objeto1.setDato1(10);
	objeto1.setDato2(6.8);
	objeto1.mostrarDatos();
	return 0;
}
