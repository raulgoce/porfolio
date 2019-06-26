//1. Escribe la siguiente expresión como expresión en C++: (a/b)+1

#include <iostream>

using namespace std;

int main(){
	
	float a,b,finalResult=0;
	
	cout<<"Introduzca el primer valor: "; cin>>a;
	cout<<"Introduzca el segundo valor: "; cin>>b;
	
	finalResult=(a/b)+1;
	
	cout.precision(2); //funcion para acotar el numero de decimales que queremos mostrar
	cout<<"El resultado de (a/b)+1 es: "<<finalResult;
	
	
	return 0;
}
