/* 8.Escribe un programa que lea tres números. Después
debe leer un cuarto número e indicar si el número coincide 
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
