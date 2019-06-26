//Autoreferencia this

#include <iostream>
#include <string.h>
#include "Perro.h"
using namespace std;

int main(int argc, char** argv) {
	Perro *perro1=new Perro("Toby","Pitbull");
	perro1->mostrarDatos();
	perro1->jugar();
	delete perro1;//destruir un objeto de tipo dinamico
	cout<<endl;
	Perro perro2("Tom","Cocker");
	perro2.mostrarDatos();
	perro2.jugar();
	perro2.~Perro(); //destructor para tipo estatico
	
	return 0;
}
