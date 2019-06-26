/* 9.Escriba un programa que calcule el valor de: 1*2*3*...*n */


#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int number,fact=1;
	cout<<"Escriba su numero: ";cin>>number;
	
	for(int i=1;i<=number;i++){
		fact*=i;
	}
	
	cout<<"El resultado de los factoriales es: "<<fact<<endl;
	system("pause");
	return 0;
}
