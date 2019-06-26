/* 9.Realice un programa que calcule la suma de dos matrices dinamicas.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void AskData();
void SumMatrices(int **, int**, int, int);
void ShowMatriz(int**,int, int);

int **punteroMatriz, **punteroMatriz2, nrows, ncols;

int main(){
	
	AskData();
	SumMatrices(punteroMatriz, punteroMatriz2,nrows, ncols);
	ShowMatriz(punteroMatriz,nrows, ncols);
		//liberamos la memoria de la matriz
	for( int i=0; i<nrows;i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;
		//liberamos la memoria de la matriz
	for( int i=0; i<nrows;i++){
		delete[] punteroMatriz2[i];
	}
	delete[] punteroMatriz2;
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de filas: "; cin>>nrows;
	cout<<"Escriba el numero de columnas: ";cin>>ncols;
	//creamos la matriz dinamica 1
	punteroMatriz= new int*[nrows];
	for(int i=0; i<nrows;i++){
		punteroMatriz[i]=new int[ncols]; //reservamos memoria para las columnas
	}
	//creamos la matriz dinamica 2
	punteroMatriz2= new int*[nrows];
	for(int i=0; i<nrows;i++){
		punteroMatriz2[i]=new int[ncols];
	}
	for(int i=0; i<nrows; i++){
		for(int j=0;j<ncols; j++){
			cout<<"Escriba su dato para la posicion de la matriz1 ["<<i<<"]["<<j<<"]: "; cin>>*(*(punteroMatriz+i)+j);
		}
		cout<<"\n";
	}
	for(int i=0; i<nrows; i++){
		for(int j=0;j<ncols; j++){
			cout<<"Escriba su dato para la posicion de la matriz2 ["<<i<<"]["<<j<<"]: "; cin>>*(*(punteroMatriz2+i)+j);
		}
		cout<<"\n";
	}
}


void SumMatrices(int **punteroMatriz,int **punteroMatriz2, int nrows, int ncols){
	int array[nrows][ncols];
	for(int i=0; i<nrows; i++){
		for(int j=0;j<ncols; j++){
			*(*(punteroMatriz+i)+j)+=*(*(punteroMatriz2+i)+j);
		}
	}	
}

void ShowMatriz(int **punteroMatriz,int nrows, int ncols){
	for(int i=0; i<nrows; i++){
		for(int j=0;j<ncols; j++){
			cout<<*(*(punteroMatriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
