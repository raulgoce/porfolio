/* 2.Escribe un programa que defina un array de numeros y
calcule la multiplicacion acumulada de sus elementos. */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	//definimos un array con numeros
	int myArray[5]={1,2,3,4,5};
	int inc=1;//asignamos 1 ya que si multiplicamos por 0 dará siempre 0
	
	//se asigna i a 0 ya que los arrays empiezan con 0. 
	for(int i=0; i<5; i++){
		inc *= myArray[i];
	}
	
	cout<<"La multiplicacion de los elementos del array es: "<<inc<<endl;
	
	getch();
	return 0;
}
