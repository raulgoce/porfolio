/* 4.Haga un array preguntando al usuario el numero de filas y columnas,
rellenela de numeros aleatorios, copie el contenido en otro array y muestrelo. */

/* 3.Haga un array de 2x2, rellenela de números y luego copie todo 
en otro array. */

#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	int myArray[100][100];
	int lastArray[100][100];
	int cols, rows,foo;
	
	cout<<"Ingrese el numero de filas: "; cin>>rows;
	cout<<"Ingrese el numero de columnas: "; cin>>cols;
	
	srand(time(NULL)); //generar numeros random
	for(int i=0;i<rows; i++){
		for(int j=0;j<cols;j++){
			foo = 1+rand()%(100); //generando números aleatorios entre 1 y 100
			myArray[i][j]=foo;
			lastArray[i][j]=myArray[i][j];
			cout<<lastArray[i][j]<<" ";
		}
		cout<<"\n";
	}	
	
	getch();
	return 0;
}
