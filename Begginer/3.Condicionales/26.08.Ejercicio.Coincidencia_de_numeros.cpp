/* 8.Escribe un programa que lea tres n�meros. Despu�s
debe leer un cuarto n�mero e indicar si el n�mero coincide 
con alguno de los introducidos con anterioridad. */


#include <iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4 ;
	
	cout<<"Introduzca 4 numeros:";
	cin>>n1>>n2>>n3>>n4;
	
	if((n1==n4)||(n2==n4)||(n3==n4)){
		cout<<"El cuarto numero introducido coincide con alguno de los anteriores.";
	}else{
		cout<<"El cuarto numero introducido no coincide con ninguno.";
	}
	
	return 0;
}
