/* 7.Intercambie el valor de dos variables con el paso por referencia.*/


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
void Change(int&, int&);

int main(){
	int num1=10,num2=15;
	cout<<"El valor de num1 es: "<<num1<<endl;
	cout<<"El valor de num2 es: "<<num2<<endl;
	
	Change(num1, num2);
	
	cout<<"El nuevo valor de num1 es: "<<num1<<endl;
	cout<<"El nuevo valor de num2 es: "<<num2<<endl;
	
	
	getch();
	return 0;
}


//definicion de funcion
void Change(int& x, int& y){
	int aux;
	
	aux = x;
	x   = y;
	y   = aux;
}
