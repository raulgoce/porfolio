/* 15.Realice un programa que escoja un numero aleatorio del 1-100 y que 
muestre cuantos intentos lleva el usuario para adivinar ese numero.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int number, randomNumber, count=0;
	
	srand(time(NULL)); //genera un número aleatorio. 
	randomNumber=1+ rand()%(100);
	do{
		cout<<"Escriba un numero: "; cin>>number;
		if(number>randomNumber){
			cout<<"\nEscriba un numero menor\n";
		}
		if(number<randomNumber){
			cout<<"\nEscriba un numero mayor\n";
		}
		count++;
	}while(number!=randomNumber);
	
	cout<<"\nFelicidades adivino el numero!\n"<<"Numero de intentos: "<<count<<endl;
	
	system("pause");
	return 0;
}
