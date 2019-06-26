/* 16.Realice un programa que calcule la descomposici�n en factores primos
de un n�mero entero. PE: 20=2*2*5. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number;
	
	cout<<"Escriba un numero: ";cin>>number;
	
	//el numero ingresado supongamos que es 20. Al dividirlo por 2 y ser exacto, se almacena en number el nuevo valor. 
	//mientras number pueda seguir dividiendo entre 2 y de 0, se seguir� ejecutando. De otra manera, i aumentar�. 
	for(int i=2;number>1;i++){
		while(number%i==0){
			cout<<i<<" ";
			number/=i;
		}
	}
	
	getch();
	return 0;
}
