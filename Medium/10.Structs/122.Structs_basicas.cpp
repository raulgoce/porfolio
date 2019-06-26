//Estructura basica en C++

#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1={"Alejandro",20},
persona2={"Pedro",24}
; //cuando ya estan rellenadas.

struct PersonaTest{
	char nombre[20];
	int edad;
}
persona1T,persona2T;

int main(){
	//struct 1
	cout<<"Nombre 1: "<<persona1.nombre<<endl;
	cout<<"Edad 1: "<<persona1.edad<<endl;
	
	cout<<"\nNombre 2: "<<persona2.nombre<<endl;
	cout<<"Edad 2: "<<persona2.edad<<endl;
	
	
	//struct 2 , almacenando nosotros los valores. 
	
	cout<<"\nEscriba su nombre: ";cin.getline(persona1T.nombre,20,'\n');
	cout<<"Escriba su edad: ";cin>>persona1T.edad;
	
	cout<<"\nNombre 1T: "<<persona1T.nombre<<endl;
	cout<<"Edad 1T: "<<persona1T.edad<<endl;
	getch();
	return 0;
	
}
