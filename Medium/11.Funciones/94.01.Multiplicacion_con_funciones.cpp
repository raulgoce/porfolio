/* 1.Escriba una funcion llamada mult() que acepte dos numeros flotantes
los multiplique y despliegue el resultado.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
void askData();
void mult(float x, float y);
float num1, num2;

int main(){
	
	askData(); 
	mult(num1, num2);
	
	
	getch();
	return 0;
}


//definicion de funcion
void askData(){

	cout<<"Escriba dos numeros float: "; cin>>num1>>num2;
}

void mult(float x, float y){
	float result =x*y;
	cout<<"La multiplicacion es: "<<result<<endl;
}


