/* 3.Escribe un programa que devuelva la parte fraccionaria de un numero
introducido por el user.*/



#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
void askData();
float cutNumber(float x);
float number;

int main(){
	
	askData(); 
	cout<<"La parte fraccionaria del numero es: "<<cutNumber(number);
	getch();
	return 0;
}


//definicion de funcion
void askData(){
	cout<<"Escriba su numero: "; cin>>number;
}

float cutNumber(float n){
	int integer = n;
	float result= n-integer;
	return result;
}
