//transformar una cadena a numeros - funcion atoi()->int y atof()->float


#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria de atoi, atof
#include <string.h>

using namespace std;

int main(){
	char word[]="123";
	char word1[]="123.45";
	int number;
	float floatN;
	
	number=atoi(word); //cambiamos a int
	cout<<number<<endl;
	
	floatN=atof(word1); //cambiamos a float
	cout<<floatN<<endl;
	
	//suma de dos numeros
	
	cout<<"La suma es: "<<number+floatN<<endl; //como no se pueden sumar dos cadenas de texto como numeros, los pasamos. 
	
	getch();
	return 0;
}

