//Autoreferencia -> this
#include <iostream>
#include <string.h>
using namespace std;
class Perro{
	//Atributos
	public:
		string nombre, raza;
		 
	//metodos
	public:
		Perro(string nombre, string raza){ //constructor
			this->nombre = nombre;
			this->raza   = raza;
		}
		
		~Perro(){//destructor
		}
		void mostrarDatos();
		void jugar();	
};
