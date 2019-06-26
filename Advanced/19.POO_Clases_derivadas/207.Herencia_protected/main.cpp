#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"

int main(int argc, char** argv) {
	Turismo*t1=new Turismo("Opel","Rojo","Corsa",5);
	cout<<"El color de su vehiculo es: "<<t1->getColor()<<endl;
	t1->setColor("Amarillo");
	cout<<"El color de su vehiculo es: "<<t1->getColor()<<endl;
	//todo esto era public, por lo tanto podiamos acceder. 
	
	//	cout<<t1->getModelo(); ->da error ya que es protected. 
	cout<<"Modelo: "<<t1->retornarModelo()<<endl; //hemos creado un metodo en la clase de turismo para poder acceder al elemento protected
	
	//HERENCIA PRIVADA
	Deportivo* d1=new Deportivo("Audi","Gris","R8",500);
	cout<<"Cilindrada: "<<d1->getCilindrada()<<endl;
	//	cout<<"Marca: "<<d1->getMarca()<<endl;->da error ya que al ser privada la clase, se vuelve privado aun ya sea publico
	cout<<"Marca: "<<d1->devolverMarca()<<endl;
	
	//HERENCIA PROTECTED
	Furgoneta* f1=new Furgoneta("Kia","Negro","A2",1200);
	cout<<"Carga: "<<f1->getCarga()<<endl;
	//	cout<<"Color: "<<f1->getColor()<<endl;->da error al ser protected
	cout<<"Color: "<<f1->verColor()<<endl;
	delete t1;
	delete d1;
	delete f1;
	
	return 0;
}
