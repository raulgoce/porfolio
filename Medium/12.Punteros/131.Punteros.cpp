//Punteros

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num=30,*dir_num;
	dir_num= &num; //almacenamos la direccion de memoria en una variable. Tiene que ser del mismo tipo de vari

	cout<<"Numero: "<<num<<endl;
	cout<<"Direccion de memoria "<<&num<<endl; //indica la direccion de memoria donde se esta almacenando la variable
	cout<<"Numero desde direccion: "<<*dir_num<<endl;
	cout<<"Direccion de memoria: "<<dir_num<<endl;

	getch();
	return 0;
}
