/* 8. Pida una cadena de caracteres e indique cuantas veces aparecen 
cada vocal. Use punteros. */


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirNombre();
void ContadorVocales(char*);

char nombreUser[30];

int main(){
	pedirNombre();
	ContadorVocales(nombreUser);
	getch();
	return 0;
}

void pedirNombre(){
	cout<<"Escriba su nombre: ";cin.getline(nombreUser, 30, '\n');
	
	strupr(nombreUser); //pasamos a mayuscula el nombre para no tener que comprobarlo dos veces.
}
void ContadorVocales(char *nombreUser){
	int contA=0,contE=0, contU=0, contI=0, contO=0;
	while(*nombreUser){
		switch(*nombreUser){
			case 'A':
				contA++;
			break;
			case 'E':
				contE++;
			break;
			case 'I':
				contI++;
			break;
			case 'O':
				contO++;
			break;
			case 'U':
				contU++;
			break;
		}
		nombreUser++;
	}
	cout<<"En su nombre hay "<<contA<<" 'a', "<<contE<<" 'e', "<<contI<<" 'i',"<<contU<<" 'u',"<<contO<<" 'o'";
} 
