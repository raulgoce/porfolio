//comparar cadenas - funcion strcmp()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[] = "Hello";
	char secondWord[] = "Hello"; 
	
	if(strcmp(word,secondWord)==0){//en c++ 0 es true y 1 es false, es decir, 0 es cierto y 1 es incorrecto
		cout<<"Ambas cadenas son iguales\n";//si fueran minusuclas seria diferente, ya que es case sensitive. 
	}
	char thirdWord[] = "camion";
	char fourthWord[] = "avion"; 
	
	if(strcmp(thirdWord,fourthWord)>0){//el strcmp sirve tambien para comparar
		cout<<thirdWord<<" esta despues alfabeticamente";
	}
	getch();
	return 0;
}
