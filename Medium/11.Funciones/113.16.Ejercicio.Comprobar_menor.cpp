/* 16.Realice una funcion que dada una matriz y un numero de fila
devuelva el menor numero almacenada en dicha fila. */

#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
int ShowSmall(int array[][100], int, int);

int array[100][100], ncols,nrows;

int main(){

	AskData();
	cout<<"El menor elemento es: "<<ShowSmall(array,nrows,ncols);
	
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de filas: "; cin>>nrows;
	cout<<"Escriba el numero de columnas: "; cin>>ncols;

	for(int i=0; i<nrows; i++){
		for(int j=0; j<ncols; j++){
			cout<<i+1<<". Escriba un numero en ["<<i<<"]["<<j<<"]: "; cin>>array[i][j];
		}
	}
}
int ShowSmall(int array[][100], int nrows, int ncols){
	int row=0,small=99999;
	
	cout<<"\nEscriba un numero de fila para comprobar el menor elemento: "; cin>>row;
	for(int i=0; i<nrows; i++){
		for(int j=0; j<ncols; j++){
			if(i==row){
				if(array[i][j]<small){
					small=array[i][j];
				}
			}
		}
	}
	
	return small;
}
