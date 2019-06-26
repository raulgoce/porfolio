//clases y objetos


#include <iostream>
#include "Punto.h"

using namespace std;


int main(int argc, char** argv) {
	Punto p1(2,1);//creacion de un objeto estatico
	//si los atributos de la clase fueran publicos el usuario podria hacer esto: p1.x=10;
	
	cout<<"El valor de X es: "<<p1.getX()<<endl;
	cout<<"El valor de Y es: "<<p1.getY()<<endl;
	
	Punto* p2 = new Punto(); //creacion de un objeto dinamico
	p2->setX(5);
	p2->setY(10);
	cout<<"El valor de X ahora es: "<<p2->getX()<<endl;
	cout<<"El valor de Y ahora es: "<<p2->getY()<<endl;
	
	return 0;
}
