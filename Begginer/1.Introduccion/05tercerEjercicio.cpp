/*3. Realice un programa que lea de la entrada est�ndar los siguientes datos:
- Edad
- Sexo
- Altura en metros
Tras leer los datos, debe mostrarlos */

#include <iostream>

using namespace std;

int main(){
	
	//declaramos la variable en la que almacenaremos los input
	int age=0;
	char gender[10];//con el [10] asignamos que ese char pueda tener m�ximo 10 caracteres
	float height=0;
	
	cout<<"Escriba esu edad: "; cin>>age; //declaramos el c out y el c in en la misma linea para tener el c�digo m�s limpio
	cout<<"Escriba esu genero: "; cin>>gender;
	cout<<"Escriba esu altura (en metros): "; cin>>height;

	cout<<"Usted tiene "<<age<<" a�os, es "<<gender<<", y mide "<<height<< " metros.";
	
	return 0;
}
