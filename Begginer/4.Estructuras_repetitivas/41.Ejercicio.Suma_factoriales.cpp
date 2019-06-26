/* 10.Escriba un programa que calcule el valor de: 1!+2!+3!+...+n. */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int number,fact=1,sum=0;
	cout<<"Escriba su numero: ";cin>>number;
	
	for(int i=1;i<=number;i++){
		fact*=i;
		sum+=fact;
	}
	
	cout<<"La suma de factoriales es: "<<sum<<endl;
	getch();
	return 0;
}
