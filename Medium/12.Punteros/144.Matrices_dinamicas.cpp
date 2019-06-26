//Matrices dinamicas



#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void AskData();
void ShowMatriz(int**,int, int);

int **punteroMatriz,ncols, nrows; //El segundo '*' son las filas

int main(){
	AskData();
	ShowMatriz(punteroMatriz,nrows,ncols);
	//liberamos la memoria de la matriz
	for( int i=0; i<nrows;i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;
	
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de filas: "; cin>>nrows;
	cout<<"Escriba el numero de columnas: "; cin>>ncols;
	
	punteroMatriz= new int*[nrows]; //reservamos memoria para las filas
	for( int i=0; i<nrows;i++){
		punteroMatriz[i]=new int[ncols]; //reservamos memoria para las columnas
	}
	
	cout<<"Escriba los numeros de la matriz:\n ";
	for( int i=0; i<nrows;i++){
		 for(int j=0; j<ncols;j++){
		 	cout<<"Escriba un numero para ["<<i<<"]["<<j<<"]: "; cin>>*(*(punteroMatriz+i)+j);
		 	
		 }
	}
	
}
void ShowMatriz(int **punteroMatriz, int nrows, int ncols){
	cout<<"El resultado de su matriz es: "<<endl;
	for(int i=0;i<nrows;i++){
		for(int j=0;j<ncols;j++){
			cout<<"El dato de la posicion ["<<i<<"]["<<j<<"]: "<<*(*(punteroMatriz+i)+j)<<endl;
		}
	}
}
