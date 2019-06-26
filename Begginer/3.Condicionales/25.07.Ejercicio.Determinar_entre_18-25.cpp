/* 7.Escriba un programa que solicite la edad e indique
si la edad está en el rango [18-25] */


#include <iostream>

using namespace std;

int main(){
	int age ;
	
	cout<<"Introduzca su edad: ";
	cin>>age;
	
	
	if((age <=25) && (age >=18)){
		cout<<"Su edad esta entre 18 y 25.";
	}else{
		cout<<"Su edad no esta entre 18 y 25.";
	}
	
	return 0;
}
