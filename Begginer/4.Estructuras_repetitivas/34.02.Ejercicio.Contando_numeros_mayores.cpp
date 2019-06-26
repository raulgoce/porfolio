/* 2.Realice un programa que lea numeros hasta que se introduzca un 0. 
En ese momento el programa debe terminar y mostrar en la salida el numero de valores
mayores que cero leídos. */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number,count=0;
	do{
			cout<<"Escriba su numero: "; cin>>number;
			if(number>0){
				count++;
			}
		
	}while(number!=0);
	cout<<"El numero de valores introducidos mayores que 0 son: "<<count<<endl;
	return 0;
}
