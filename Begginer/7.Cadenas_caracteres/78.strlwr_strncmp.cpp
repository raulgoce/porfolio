//pasar una palabra o cadena a minusculas - funcion strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[20]="ALEJANDRO";
	char word1[20]="alejandro";
	
	strlwr(word); //ponemos a minuscula el nombre
	
	if(strncmp(word,"al",2)==0){ //strncmp sirve para comprobar unos caracteres concretos //strncmp(variable, "caracteres a comprobar", numero de posiciones desde el 1
		cout<<"Su nombre empieza por AL";
	}else{
		cout<<"Su nombre no empieza por AL";
	}
	
	
	getch();
	return 0;
}
