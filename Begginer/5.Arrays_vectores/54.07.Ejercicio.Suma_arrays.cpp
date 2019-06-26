/* 7.Realice un programa que defina dos arrays de chars y después
almacene el contenido de ambos arrays en uno nuevo. */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char myFirstArray[]={'a','b','c'};
	char mySecondArray[]={'d','e','f'};
	char lastArray[100];
	
	for(int i=0; i<3; i++){
		lastArray[i]=myFirstArray[i];
	}
	//las tres primeras posiciones ya estan ocupadas por el primer array
	for(int i=3; i<6; i++){
		lastArray[i]=mySecondArray[i-3]; //se le resta para ponerla a 0
	}
	
	for(int i=0;i<6; i++){
		cout<<lastArray[i]<<endl;
	}
	
	
	
	getch();
	return 0;
}
