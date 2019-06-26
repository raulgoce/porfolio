/* 2.Realice un programa que defina un array de 3x3 y escriba
un ciclo para que muestre la diagonal principal del array. */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numbers[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"\nMostrando array completa\n";
	for (int i=0; i<3; i++){
		for(int j=0;j<3;j++){
			cout<<numbers[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nMostrando diagonal principal\n";
	for (int i=0; i<3; i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<numbers[i][j];
			}
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
