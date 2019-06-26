/* 21.Escriba una funcion recursiva que calcule un 
numero elevado a una potencia entera mayor o igual 
que cero:x^y

potencia(x,y) = x             		,y=1
				x*potencia(x,y-1)   ,y>1


 */


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de funcion
int potencia(int,int);

//main
int main(){
	int base, exponente;
		cout<<"Escriba la base: ";
		cin>>base;
	do{
		cout<<"Escriba el exponente: ";
		cin>>exponente;
	}while(exponente<=0);	
		
		cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<<": "<<potencia(base, exponente)<<endl;	
	
	
	getch();
	return 0;
}

//Funcion recursiva

int potencia(int x, int y){
	int pot;
	
	if(y==1){ //caso base
		pot=x;
	}else{ //caso general
		pot= x*potencia(x,y-1);
	}
	return pot;
}
