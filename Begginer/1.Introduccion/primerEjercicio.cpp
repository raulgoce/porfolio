/*1. Escribe un programa que lea de la entrada est�ndar dos n�meros y muestre en la salida est�ndar su suma, 
resta, multiplicaci�n y divisi�n. */

#include <iostream>

using namespace std;

int main(){
	int n1, n2, sum = 0 , rest = 0, mult = 0 , div = 0; //declaraci�n de variables en una sola linea. 
	
	cout<<"Escriba el primer numero que quiere calcular: ";
	cin>>n1;
	cout<<"Escriba el segundo numero que quiere calcular: ";
	cin>>n2;
	
//asignamos las operaciones necesarias a las variables correspondientes
	sum  = n1+n2; 
	rest = n1-n2;
	mult = n1*n2;
	div  = n1/n2;
	
	cout<<"El resultado de la suma es: "<<sum<<endl;
	cout<<"El resultado de la resta es: "<<rest<<endl;
	cout<<"El resultado de la multiplicacion es: "<<mult<<endl;
	cout<<"El resultado de la division es: "<<div<<endl;
	
	return 0;
}
