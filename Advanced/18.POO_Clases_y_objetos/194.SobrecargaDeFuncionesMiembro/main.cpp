//sobrecarga de metodos / podemos sobrecargar los metodos con diferentes tipos de variables, por ejemplo la misma funcion con un char y otra con int

#include <iostream>
#include "Persona.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Persona *persona1 = new Persona("Raul",27);
	persona1->correr();
	persona1->correr(12);
	
	Persona* persona2 = new Persona("2929091A");//segun los valores y el tipo que le pasemos, hara un construct u otro
	persona2->mostrarDni();
	return 0;
}
