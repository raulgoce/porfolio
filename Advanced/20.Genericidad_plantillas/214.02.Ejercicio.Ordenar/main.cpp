#include <iostream>
#include "Ordenar.h"
using namespace std;

template<typename T>

void pedirDatos(T*array,int n){
	for(int i=0;i<n;i++)
	{
		cout<<"Escriba un elemento["<<i<<"]: "; cin>>array[i];
	}
}

template <typename T>
void mostrarArray(T*array, int n){
	for(int i=0;i<n;i++){
		cout<<"Elemento["<<i<<"]: "<<array[i]<<endl;
	}
}


int main(int argc, char** argv) {
	int n;
	cout<<"Escriba el numero de elementos: ";cin>>n;
	int *array= new int[n];
	cout<<"Pidiendo los datos del array: "<<endl;
	pedirDatos(array, n);
	
	//Ordenamos los elementos Asc
	ordenarAsc(array,n);
	mostrarArray(array,n);
	
	//ordenamos Desc
	ordenarDesc(array, n);
	mostrarArray(array, n);
	
	delete[] array;	
	return 0;
}
