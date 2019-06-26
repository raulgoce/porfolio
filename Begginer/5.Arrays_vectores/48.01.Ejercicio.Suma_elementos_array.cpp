/* 1.Escribe un programa que defina un vector y calcule la suma de 
sus elementos. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//definimos un array con numeros
	int myFisrtArrayInCpp[5]={1,2,3,4,5};
	int sum=0;
	
	//se asigna i a 0 ya que los arrays empiezan con 0. 
	for(int i=0; i<5; i++){
		sum += myFisrtArrayInCpp[i];
	}
	
	cout<<"La suma de los elementos del array es: "<<sum<<endl;
	
	getch();
	return 0;
}
