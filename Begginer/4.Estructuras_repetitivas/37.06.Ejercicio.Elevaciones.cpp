/* 6.Escriba un programa que calcule x elevado a y, donde tanto x como y son enteros positivos
y no debe utilizar la funcion pow(). */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x,y,elevation=1;
	
	cout<<"Escriba el valor de x: ";
	cin>>x;
	cout<<"Escriba el valor de y: ";
	cin>>y;
	
	for(int i=1;i<=y;i++){
		elevation*=x;
	}
	
	cout<<"El resultado de la elevacion es: "<<elevation<<endl;
	
	return 0;
}
