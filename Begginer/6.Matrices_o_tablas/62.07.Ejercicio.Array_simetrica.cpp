/* 7.Desarrolle un programa que determine si un array es simétrica o no.*/

	//un array es simétrica si es cuadrada y si es igual a su inversa.
	 
	
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int firstArray[100][100],rows,cols;
	char flag='F'; //utilizamos una bandera
	int secondArray[3][3];
	
	cout<<"Ponga el numero de filas: "; cin>>rows;
	cout<<"Ponga el numero de columnas: "; cin>>cols;
	
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<"Introduzca un numero para ["<<i<<"]["<<j<<"]: "; cin>>firstArray[i][j];
		}
	}
	
	if(rows==cols){
		for(int i=0; i<rows;i++){
			for(int j=0; j<cols; j++){
				if(firstArray[i][j]==firstArray[j][i]){
					flag='T';
				}
			}
		}
	}
	if(flag=='T'){
		cout<<"El array es simetrico.";
	}else{
		cout<<"El array no es simetrico.";
	}
	
	getch();
	return 0;
}
