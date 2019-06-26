/* 5.Realice un programa que lea un array de 3x3 y cree una traspuesta, intercambiando filas y columnas.*/ 


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int myArray[3][3];
	
	//pedimos al user que rellene el array
	for(int i=0;i<3; i++){
		for(int j=0;j<3;j++){
			cout<<"Escriba un numero en ["<<i<<"]["<<j<<"]: "; cin>>myArray[i][j];
		}
	}	
	
	//imprimimos el array original
	cout<<"Esta es el array original: \n";
	for(int i=0;i<3; i++){
		for(int j=0;j<3;j++){
			cout<<myArray[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//imprimimos el array inverso, en donde iban las filas ahora van las columnas. 
	cout<<"Esta es el array inverso: \n";
	for(int i=0;i<3; i++){
		for(int j=0;j<3;j++){
			cout<<myArray[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
