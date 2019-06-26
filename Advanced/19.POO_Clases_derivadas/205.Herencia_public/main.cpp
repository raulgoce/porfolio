#include <iostream>
#include "Turismo.h"

int main(int argc, char** argv) {
	Turismo*t1=new Turismo("Opel","Rojo","Corsa",5);
	
	string nuevoColor;
	cout<<"El color de su vehiculo es: "<<t1->getColor()<<endl;
	cout<<"Ponga un nuevo color: ";getline(cin,nuevoColor);
	t1->setColor(nuevoColor);
	cout<<"El color de su vehiculo es: "<<t1->getColor()<<endl;
	//todo esto era public, por lo tanto podiamos acceder. 
	
	//	cout<<t1->getModelo(); ->da error ya que es protected. 
	cout<<"Modelo: "<<t1->retornarModelo(); //hemos creado un metodo en la clase de turismo para poder acceder al elemento protected
	return 0;
}
