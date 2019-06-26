// Ordenamiento por insercion

//mira tanto la siguiente posicion como la anterior
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int numbers[5]={4,2,3,1,5};
	int i,aux;

	for(i=0;i<5;i++){
		aux = numbers[i]; //pasamos el valor de la posicion i del array a auxiliar
		while((i>0)&&(numbers[i-1]>aux)){ //miramos que mientras la posicion del array i>0 y la posicion de la izquierda sea mayor a la de la derecha
			numbers[i] = numbers[i-1]; //sustituimos el valor de la derecha por el de la izquierda
			i--;
		}
		numbers[i] = aux; //ponemos en la posicion actual el valor de la posicion de la izquierda
	}	
	
	for(i=0;i<5;i++){
		cout<<"El array quedaria tal que asi: ["<<i<<"]: "<<numbers[i]<<endl;
	}
	
	
	getch();
	return 0;
}
