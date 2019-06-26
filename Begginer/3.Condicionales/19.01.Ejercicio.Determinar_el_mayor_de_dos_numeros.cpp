/* 1.Escriba un programa que lea dos números y determine cuál de ellos
es el mayor. */

#include <iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Escriba 2 numeros: ";
	cin>>n1>>n2;//c in para almacenar más de un valor, se concatena con ">>"
	
	
	if(n1==n2){
		cout<<"Ambos numeros son iguales";
	}
	//estructura condicional que sirve para poner otra condicion que no sea la principal
	else if(n1>n2){
		cout<<"El mayor es: "<<n1;
	}else{
		cout<<"El mayor es: "<<n2;
	}
	
	return 0;
}
