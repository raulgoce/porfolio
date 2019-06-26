/* 1. Determinar si un numero es par o impar y señalar la posicion de memoria. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number,*dir_number;
	dir_number=&number;

	cout<<"Introduzca un numero: "; cin>>number;
	if(*dir_number%2==0){
		cout<<"El numero "<<*dir_number<<" es par. "<<endl;
		cout<<"La posicion de memoria del numero introducido es: "<<dir_number;
	}else{
		cout<<"El numero "<<*dir_number<<" es impar."<<endl;
		cout<<"La posicion de memoria del numero introducido es: "<<dir_number;
	}


	getch();
	return 0;
}
