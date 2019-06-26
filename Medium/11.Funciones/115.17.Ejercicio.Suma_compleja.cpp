/* 17.Sume dos numeros complejos

z1=5-3i , z2=-4+2i

z1+z2   = (5-3i) + (-4+2i)
		= 5-3i-4+2i 
		= 1-i
*/


#include <iostream>
#include <conio.h>

using namespace std;

struct Complejo{
	float real, imaginaria;
}z1,z2;

//Prototipo
void AskData();
Complejo suma(Complejo, Complejo);
void show(Complejo);

//main
int main(){

	AskData();
	Complejo x = suma(z1,z2);
	show( x);
	getch();
	return 0;
}

//Estructura
void AskData(){
	
	cout<<"Escriba los datos para el primer numero complejo. "<<endl; 
	cout<<"Parte real: "; cin>>z1.real;
	cout<<"Parte imaginaria: "; cin>>z1.imaginaria;
	
	cout<<"Escriba los datos para el segundo numero complejo. "<<endl; 
	cout<<"Parte real: "; cin>>z2.real;
	cout<<"Parte imaginaria: "; cin>>z2.imaginaria;
	
}

Complejo suma(Complejo z1, Complejo z2){
	float parteImaginaria=0, parteReal=0;
	z1.imaginaria+=z2.imaginaria;
	z1.real+=z2.real;
	
	return z1;
}

void show(Complejo x){
	cout<<"El resultado de la suma es: "<<x.real<<" , "<<x.imaginaria<<endl;
	
}


