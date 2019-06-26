/* 8.Escriba un programa que calcule el valor de: 1+3+5+..+2n-1 .*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int nElements,sum;
	
	cout<<"Escriba el numero de elementos a sumar: ";cin>>nElements;
	for(int i=1;i<=2*nElements-1;i+=2){
		sum+=i;
	}
	
	cout<<"El resultado de suma es: "<<sum<<endl;
	getch();
	return 0;
}
