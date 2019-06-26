/* 13.Hacer un programa que realice la serie fibonacci-> 1,1,2,3,5,8,13,...,n */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int number,x=0,y=1,z=0;
	cout<<"Escriba su numero: ";cin>>number;
	
	for(int i=1;i<=number;i++){
		z=x+y; //se suma el valor de x+y, lo que al principio daría 1 //se suma 1+1, luego 1+2, luego 2+3 y así. 
		cout<<z<<" "; //se imprime el valor de z
		x=y; //x que valía 0 ahora vale y=1 //x que valía 1 ahora vale 1, luego 2, luego 3, luego 5...
		y=z; //y que valía 1 ahora vale z=1
	}
	getch();
	return 0;
}
