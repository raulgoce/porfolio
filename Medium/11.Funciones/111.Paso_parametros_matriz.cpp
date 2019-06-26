//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz


#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void ShowMatriz(int m[][3], int,int); //c++ nos obliga a poner el numero de cols, asi como enviar el numero de filas y columnas
void ShowMatrizElevada(int m[][3],int, int);

int main(){
	const int NROWS=2;
	const int NCOL=3;

	int m[NROWS][NCOL] = {{1,2,3},{4,5,8}};
	ShowMatriz(m,NROWS,NCOL);
	ShowMatrizElevada(m,NROWS,NCOL);

	getch();
	return 0;
}

void ShowMatriz(int m[][3],int rows, int cols){
	cout<<"Mostrando matriz original: "<<endl;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<m[i][j]<<"|";
		}
		cout<<"\n";
	}
}


void ShowMatrizElevada(int m[][3],int rows, int cols){
	cout<<"Mostrando matriz elevada: "<<endl;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<pow(m[i][j],2)<<"|";
		}
		cout<<"\n";
	}
}

