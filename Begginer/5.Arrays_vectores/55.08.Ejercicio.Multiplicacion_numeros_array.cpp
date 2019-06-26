/* 8.Haga un programa que lea los 5 primeros numeros de un array,
los copie en otros multiplicados por 2 y lo muestre. */


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	//para un array establecido
	int myFirstArray[7]={1,2,3,4,5,6,7};
	int lastArray[100];
	
	for(int i=0; i<5; i++){
		lastArray[i]=myFirstArray[i]*2;
	}
	for(int i=0;i<5; i++){
		cout<<lastArray[i]<<endl;
	}
	
	//para un array por entrada
	int mySecondArray[100];
	int myLastArray[100];
	
	for(int i=0; i<5; i++){
		cout<<i<<". Escriba los numeros del array: ";
		cin>>mySecondArray[i];
	}
		//para multiplicarlos
	for(int i=0;i<5; i++){
		myLastArray[i]=mySecondArray[i]*2;
	}
	for(int i=0;i<5; i++){
		cout<<myLastArray[i]<<endl;
	}
	
	getch();
	return 0;
}
