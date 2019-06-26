//miembros Static

#include <iostream>
#include "Estatico.h"
using namespace std;

int main(int argc, char** argv) {
	Estatico* objeto1 = new Estatico();
	Estatico* objeto2 = new Estatico();
	
	cout<<objeto1->getContador()<<endl;//aun llamando al objeto1, como es estatico, es para toda la clase, para todos los objetos
	cout<<"La suma es: "<<Estatico::sumar(4,5);//llamada al metodo estatico
	return 0;
}
