/* 1.Relice un programa que solicite un entero del 1 al 10 y muestre la tabla de multiplicar. */

#include <iostream>

using namespace std;

int main(){
	int number;
	do{
			cout<<"Escriba un numero del 1 al 10: "; cin>>number;
	}while((number<1)||(number>10));
	
	//condicional que nos hará las operaciones y nos mostrará por pantalla los resultados
	for(int i=1;i<=10;i++){
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}
	return 0;
}
