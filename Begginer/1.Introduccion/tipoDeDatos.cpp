//Tipos de datos básicos de C++

#include <iostream>

using namespace std;

int main() {

	
	int number = 15; //declaración de una variable de tipo entero
	float floatNumber = 12.3; //declaración de una variable de tipo float
	double bigNumber = 12.345383; //declaración de una variable de tipo double
	char letter = 'a'; //declaración de una variable de tipo char (tiene que ir con comillas simples)
	string intro= "Hello World!"; //declaración de una variable de tipo string (tiene que ir con doble comillas)
 
	cout << number<<endl; //imprimir el valor de la variable en consola y le ponemos un salto de línea
	cout << floatNumber<<endl;
	cout << bigNumber<<endl;
	cout << letter<<endl;
	cout << intro<<endl;
	

	return 0;
}
