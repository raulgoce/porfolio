/* 3.Escriba una funcion nombrada funpot() que eleve un numero entero
que se le transmita a una potencia en numero positivo y despligue el resultado.
El numero positivo debera ser el segundo valor. */


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
void askData();
void funpot(int x,int y);
int numero,exponente;

int main(){
	
	askData(); 
	funpot(numero,exponente);
	
	
	getch();
	return 0;
}


//definicion de funcion
void askData(){
	cout<<"Escriba su numero entero: "; cin>>numero;
	cout<<"Escriba su exponente de elevacion: "; cin>>exponente;
}

void funpot(int x,int y){
	long result=1;
	for(int i=1;i<=y;i++){
		result *=x;
	}
	
	cout<<"El resultado es: "<<result<<endl;
}

