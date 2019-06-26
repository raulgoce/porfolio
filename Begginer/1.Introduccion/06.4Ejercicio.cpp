/* 4. Ejecute el programa del ejercicio anterior con entradas erróneas y 
observe los resultados. Por ejemplo, introduzca un dato de tipo carácter
cuando se espera un dato de tipo entero.
*/


#include <iostream>

using namespace std;

int main(){
	
	//declaramos la variable en la que almacenaremos los input
	int age;
	char gender[10];//con el [10] asignamos que ese char pueda tener máximo 10 caracteres
	float height;
	
	cout<<"Escriba esu edad: "; cin>>age; //declaramos el c out y el c in en la misma linea para tener el código más limpio
	cout<<"Escriba esu genero: "; cin>>gender;
	cout<<"Escriba esu altura (en metros): "; cin>>height;

	cout<<"Usted tiene "<<age<<" años, es "<<gender<<", y mide "<<height<< " metros.";
	
	return 0;
}
