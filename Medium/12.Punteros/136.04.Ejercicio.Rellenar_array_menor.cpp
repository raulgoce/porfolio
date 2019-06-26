/* 4.Rellene un array con n numeros, posteriormente utilizando punteros determinar el menor elemento
del array. */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[100];
	int *dir_numeros,n,small=99999999;
	char pos[30];

	cout<<"Escriba el numero de posiciones que quiere que tenga su array: ";cin>>n;
	for(int i=0; i<n;i++){
		cout<<"\nEscriba un numero: "; cin>>numeros[i];
	}
	dir_numeros=numeros;
	for(int i=0; i<n; i++){
		if(*dir_numeros<small){
			small=*dir_numeros;
		}
		dir_numeros++;
	}
	cout<<"El menor elemento del array es "<<small;
	

	getch();
	return 0;
}
