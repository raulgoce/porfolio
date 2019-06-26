/* 8.Realice un programa que calcule el producto de dos
arrays cuadradas de 3x3. */
	
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int array1[3][3]={{1,2,1},{2,1,1},{2,1,2}};
	int array2[3][3]={{3,2,1},{2,3,1},{1,1,3}};
	int lastArray[3][3];
	
	//multiplicar los arrays de 3x3
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			lastArray[i][j]=0;
			for(int k=0; k<3;k++){
				lastArray[i][j]=lastArray[i][j]+array1[i][k]*array2[k][j];
				cout<<array1[i][k]<<array2[k][j]<<"\n";
			}
		}
	}
	
	cout<<"Array resultante de la multiplicacion es: \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<lastArray[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
