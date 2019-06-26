//destructor de objetos
#include <iostream>
#include <string.h>
using namespace std;
class Perro{
	//Atributos
	public:
		string nombre, raza;
		
	//metodos
	public:
		Perro(string _nombre, string _raza){ //constructor
			nombre=_nombre;
			raza= _raza;
		}
		
		~Perro(){//destructor, sirve para liberar la memoria utilizada por la clase
		}
		void mostrarDatos();
		void jugar();
		
		
};
