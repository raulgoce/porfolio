/* 3.Rellene un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numeros pares y su posicion en memoria. */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[10];
	int *dir_numeros;



	for(int i=0; i<10;i++){
		cout<<i+1<<". Inserte un valor";cin>>numeros[i];
	}
	dir_numeros = numeros; //pasamos la direccion de memoria inicial del vector
	
	for(int i=0; i<10;i++){
		if(*dir_numeros%2==0){
			cout<<"El numero "<<*dir_numeros<<" es par. "<<endl;
			cout<<"La posicon de memoria es: "<<dir_numeros<<endl;
		}
		dir_numeros++;
	}
	
	
	getch();
	return 0;
}
