/* 2.Escriba una funcion llamada al_cuadrado() que calcule el
cuadrado del valor que se le transmite y despligue el resultado.
La funcion debera ser capaz de elevar al cuadrado numeros float.  */


#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//Prototipo de la funcion
void askData();
void al_cuadrado(float x);
float num1;

int main(){
	
	askData(); 
	al_cuadrado(num1);
	
	
	getch();
	return 0;
}


//definicion de funcion
void askData(){
	cout<<"Escriba su numero float: "; cin>>num1;
}

void al_cuadrado(float x){
	float elevationOfX =pow(x,2);
	cout<<"EL numero elevado al cuadrado es: "<<elevationOfX<<endl;
}

