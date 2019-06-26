/* 3.Realice un programa que calcule y muestre la suma de todos los cuadrados de los 
10 primeros enteros mayores que 0. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int sum=0,cuadrado; 
	
	for(int i=1;i<=10;i++){
		cuadrado=i*i;
		sum+=cuadrado;
	
	}
		cout<<"El resultado de la suma de todos los cuadrados de los 10 primeros numeros es: "<<sum<<endl;
	getch();
	return 0;
}
