/* 1.Haga un programa para rellenar una matriz pidiendo al usuario el numero
de filas y columnas y muéstrela. */


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numbers[100][100], cols, rows;
	
	cout<<"Escriba el numero de filas: "; cin>>rows;
	cout<<"Escriba el numero de columnas: "; cin>>cols;
	
	for(int i=0; i<rows;i++){
		for(int j=0;j<cols; j++){
			cout<<"Escriba un numero para su array en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>numbers[i][j];
		}
	}
	
	for(int i=0; i<rows;i++){
		for(int j=0;j<cols; j++){
			cout<<numbers[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
