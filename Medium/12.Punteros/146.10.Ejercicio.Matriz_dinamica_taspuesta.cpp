/* 10.Realice un programa que lea una matriz dinamica y cree su matriz transpuesta.*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void AskData();
void ShowData(int**,int, int);
int **matriz, ncols, nrows;

int main(){
	AskData();
	ShowData(matriz, nrows, ncols);
	
	//liberamos el espacio
	for(int i=0;i<nrows;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	
	getch();
	return 0;
}

//Funcion para crear la matriz
void AskData(){
	do{
		cout<<"Escriba el numero de filas: "; cin>>nrows;
		cout<<"Escriba el numero de columnas: "; cin>>ncols;
	}while(ncols!=nrows);
	
	
	//CREAMOS MATRIZ
	matriz = new int*[nrows];
	for(int i=0; i<nrows;i++){
		matriz[i]=new int[ncols];
	}
	
	//INTRODUCIMOS DATOS A LA MATRIZ	
	cout<<" --DATOS MATRIZ-- "<<endl;
	
	for(int i=0; i<nrows;i++){
		for(int j=0; j<ncols;j++){
			cout<<"Escriba el numero correspondiente a ["<<i<<"]["<<j<<"]:"; cin>>*(*(matriz+i)+j);
		}
	}
	
}


//Funcion para mostrar la matriz
void ShowData(int**matriz, int nrows, int ncols){
	cout<<"\n"<<"--MATRIZ ORIGINAL--\n"<<endl;
	for(int i=0;i<nrows;i++){
		for(int j=0;j<ncols;j++){
			cout<<"|"<<*(*(matriz+i)+j)<<"| ";
		}
		cout<<"\n";
	}
	
	cout<<"\n"<<"--MATRIZ TRASPUESTA--\n"<<endl;
	for(int i=0;i<nrows;i++){
		for(int j=0;j<ncols;j++){
			cout<<"|"<<*(*(matriz+j)+i)<<"| ";
		}
		cout<<"\n";
	}
}

