#include <iostream>
#include "Alumno.h"
using namespace std;

void Alumno::pedirDatos(){
	cout<<"Escriba la nota de matematicas: ";cin>>notaMates;
	cout<<"Escriba la nota de programacion: ";cin>>notaProgramacion;
}
void Alumno::mostrarNotas(){
	cout<<"Nota de matematicas: "<<notaMates<<endl;
	cout<<"Nota de programacion: "<<notaProgramacion<<endl;
	cout<<"Promedio: "<<(notaMates+notaProgramacion)/2<<endl;
}
