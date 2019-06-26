/* 3.Realice un programa que lea un valor entero y determine
si se trata de un número par o impar. */

#include <iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Escriba un numero: ";
	cin>>number;
	
	//condicion para ver si un numero es par, ya que al dividirlo entre 2, su residuo tiene que ser 0.
	
	if(number==0){
		cout<<"El numero es 0."<<endl;
	} else if(number%2==0){
		cout<<"El numero es par."<<endl;
	}else{
		cout<<"El numero es inpar."<<endl;
	}
	
	return 0;
}
