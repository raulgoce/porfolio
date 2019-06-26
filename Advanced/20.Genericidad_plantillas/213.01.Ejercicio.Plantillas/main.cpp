/* 1.Defina una plantilla dentro de un archivo de cabecera llamado Intercambio
que pueda intercambiar el valor de dos variables*/


#include <iostream>
#include "Intercambio.h"
using namespace std;

int main(int argc, char** argv) {
	int dato1, dato2;
	cout<<"Escriba el valor de dato1: ";cin>>dato1;
	cout<<"Escriba el valor de dato2: ";cin>>dato2;
	
	intercambio(dato1, dato2);
	cout<<"Los nuevos valores son: "<<endl;
	cout<<"El valor de dato1 es: "<<dato1<<endl;
	cout<<"El valor de dato2 es: "<<dato2;
	
	return 0;
}
