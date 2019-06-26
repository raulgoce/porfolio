/* 7.Pida el nombre al usuario y devuelva el numero de vocales que tiene el
nombre. Use punteros. */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirNombre();
int ContadorVocales(char *);

char nombreUser[30];

int main(){
	pedirNombre();
	cout<<"El numero de vocales del nombre es: "<<ContadorVocales(nombreUser)<<endl;
	getch();
	return 0;
}

void pedirNombre(){
	cout<<"Escriba su nombre: ";cin.getline(nombreUser, 30, '\n');
	
	strupr(nombreUser); //pasamos a mayuscula el nombre para no tener que comprobarlo dos veces.
}

int ContadorVocales(char *nombre){
	int cont=0;
	while(*nombre){
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			cont++;
		}
		nombre++;
	}
	return cont;
}
