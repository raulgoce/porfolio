/* 2.Construya un programa que calcule el area y el perimetro de un 
cuadrilatero dada la longitud de sus dos lados. Los valores de la longitud 
deberan introducirse por linea de ordenes. Si es un cuadrado, solo se 
proporcionara la longitud de uno de los lados al constructor. */


#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

int main(int argc, char** argv) {
	Cuadrilatero * c1; //inicializamos, pero no lo asignamos, ya que el usuario nos tiene que poner los datos
	float lado1,lado2;
	cout<<"Escriba el lado 1 del cuadrilatero: "; cin>>lado1;
	cout<<"Escriba el lado 2 del cuadrilatero: "; cin>>lado2;
	if(lado1==lado2){
		c1 = new Cuadrilatero(lado1);
	}else{
		c1= new Cuadrilatero(lado1,lado2);
	}
	
	cout<<"\nEl area del cuadrilatero es: "<<c1->obtenerArea()<<endl;
	cout<<"El perimetro del cuadrilatero es: "<<c1->obtenerPerimetro();
	
	return 0;
}
