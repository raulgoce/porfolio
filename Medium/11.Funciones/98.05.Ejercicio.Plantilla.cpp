/* 5.Escriba una plantilla de funcion llada despliegue que imprima
el valor del argumento unico que se le transmite cuando es invocada. */

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
template<class KINDD>
void despliegue(KINDD data);

int main(){
	int number1=4;
	float number2=2.45;
	double number3=233.341;
	char data1='a';
	
	despliegue(number1);
	despliegue(number2);
	despliegue(number3);
	despliegue(data1);
	
	getch();
	return 0;
}


//definicion de funcion
template<class KINDD>
void despliegue(KINDD data){
	cout<<"El dato es: "<<data<<endl;
}
