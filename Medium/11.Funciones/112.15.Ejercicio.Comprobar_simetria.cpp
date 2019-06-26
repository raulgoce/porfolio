/* 15.Desarrollar una funcion que determine si es simetrica o no. */


#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
void CheckMatriz(int m[][100],int, int);

int m[100][100],nrows, ncols;

int main(){
	AskData();
	CheckMatriz( m, nrows, ncols);
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de filas: "; cin>>nrows;
	cout<<"Escriba el numero de columnas: "; cin>>ncols;

	for(int i=0; i<nrows; i++){
		for(int j=0; j<ncols; j++){
			cout<<j+1<<"Escriba un numero para ["<<i<<"]["<<j<<"]: "; cin>>m[i][j];
		}
	}
}

void CheckMatriz(int m[][100],int nrows, int ncols){
	int cont=0;
	if(nrows == ncols){
		for(int i=0; i<nrows; i++){
			for(int j=0; j<ncols; j++){
				if(m[i][j]==m[j][i]){
					cont++;
				}
			}
		}
	}
	if(cont == nrows*ncols){
		cout<<"La matriz es simetrica. ";
	}
	else{
		cout<<"La matriz no es simetrica. ";
	}

	
}
