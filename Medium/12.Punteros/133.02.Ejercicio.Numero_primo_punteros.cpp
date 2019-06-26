/* 2.Determine si un numero es primo o no con punteros y ademas indicar 
en que posicion de memoria se guarda dicho numero. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number, *dir_num,cont=0;
	dir_num=&number;

	cout<<"Escriba un numero para ver si es primo o no: "; cin>>number;
	for(int i=1;i<*dir_num; i++){
		if(*dir_num%i==0){
			cont++;
		}
	}
	if(cont>2){
		cout<<"El numero almacenado en "<<dir_num<<" "<<*dir_num<<" no es primo";
	}else{
		cout<<"El numero almacenado en "<<dir_num<<" "<<*dir_num<<" es primo";
	}

	getch();
	return 0;
}
