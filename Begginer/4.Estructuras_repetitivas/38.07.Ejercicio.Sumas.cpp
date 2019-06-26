/* 7.Escriba un programa que calcule el valor de: 1+2+3+..+n .*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n=0,sum;
	
	cout<<"Escriba el numero de veces que quiera sumar: ";cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	
	cout<<"El resultado de suma es: "<<sum<<endl;
	getch();
	return 0;
}
