/* 5.Escriba un programa que lea los valores hasta que se introduzca un valor 
entre 20 y 30 o se introduzca 0. El programa debe entregar al suma de los valores
introducidos mayores a 0.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int number=0,sum; 
	do{
		cout<<"Escriba su numero mientras no sea 0 o entre 20-30: "; cin>>number;
		if(number>0){ 
			sum+=number; //la suma debe ser de los numeros mayores a 0, no hay ningun rango
		}
	}while(((number>30)||(number<20))&&(number!=0)); //se comprueba que sea (mas grande que 30 o mas pequeño que 20) y diferente a 0. 
	
	cout<<"El resultado de la suma de todos los numeros es: "<<sum<<endl;
	getch();
	return 0;
}
