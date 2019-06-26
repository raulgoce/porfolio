//añadir o concatenar una cadena con otra - funcion strcat()


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char cad1[20]="Esto es una cadena";
	char cad2[20]=" de ejemplo"; 
	char cad3[20];
	
	strcpy(cad3,cad1); //copiamos la primera parte
	strcat(cad3,cad2); //concatenamos la segunda parte
	
	cout<<cad3<<endl;
	
	getch();
	return 0;
}
