/* 11.Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n. */


#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	int number,elevation=0,sum=0;
	cout<<"Escriba su numero: ";cin>>number;
	
	for(int i=1;i<=number;i++){
		elevation=pow(2,i);
		sum+=elevation;
	}
	
	cout<<"La suma de factoriales es: "<<sum<<endl;
	getch();
	return 0;
}
