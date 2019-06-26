/* 3.Escribe un programa que lea un array y muestro los numeros.*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int myArray[100],n;
	
	cout<<"Escriba el numero de elementos que tendra el array:"; cin>>n;
	 
	for(int i=0; i<n; i++){
		cout<<"Escriba un numero: ";
		cin>>myArray[i]; //guardamos los elementos del array. 
	}
	
	// Mostramos los elementos con sus indices asociados
	cout<<"\n MYARRAY "<<endl;
	for(int i=0; i<n; i++){
		cout<<i<<" -> "<<myArray[i]<<endl;
	}
	
	getch();
	return 0;
}
