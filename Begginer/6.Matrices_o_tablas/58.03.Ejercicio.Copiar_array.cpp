/* 3.Haga un array de 2x2, rellenela de números y luego copie todo 
en otro array. */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numbers[2][2]={{1,2},{3,4}};
	int lastArray[2][2];
	
	//pasamos el contenido del primer array al segundo
	for (int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			lastArray[i][j]=numbers[i][j];
			cout<<lastArray[i][j];
		}
			cout<<"\n";
	}
	
	
	getch();
	return 0;
}
