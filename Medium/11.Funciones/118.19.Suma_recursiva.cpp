/* 19.Realice una funcion recursiva que sume los primeros
n enteros positivos. Nota: para plantear al funcion recursiva
tenga en cuenta que la supa puede expresarse así:

		suma(n) = 1      		,si n=1
				= n+suma(n-1)   , si n>1
*/


#include <iostream>
#include <conio.h>

using namespace std;

int sumar(int);

//main
int main(){
	int nElements;
	do{
		cout<<"Escriba el numero de elementos: ";
		cin>>nElements;
	}while(nElements<=0); //comprobamos que no sea negativo o 0
	
	cout<<"\n La suma es: "<<sumar(nElements)<<endl;
	getch();
	return 0;
}

//Funcion recursiva

int sumar(int n){
	int suma =0;
	
	if(n==1){ //caso base
		suma=1;
	}else{ //caso general
		suma=n+sumar(n-1);
	}
	return suma;
}
