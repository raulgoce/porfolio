/* 6.Realice un programa que calcule la suma de dos matrices de 3x3.*/


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int firstArray[3][3]={{1,2,3},{4,5,6},{4,5,6}};
	int secondArray[3][3]={{6,5,4},{3,2,1},{4,5,6}};
	
	cout<<"Mostrando los dos arrays: \n";
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<firstArray[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<secondArray[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"La suma de las 2 matrices es: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<firstArray[i][j]+secondArray[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
