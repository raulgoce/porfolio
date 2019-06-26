#include <iostream>
#include <string.h>
#include "Vehiculo.h"

using namespace std;

class Turismo: public Vehiculo{ //si no se pone el tipo de herencia, se pone privado por defecto
	private:
		int numeroPuertas;
	public:
		Turismo(string marca, string color, string modelo,int numeroPuertas):Vehiculo(marca, color, modelo){
			this->numeroPuertas=numeroPuertas;
		}
		int getNumeroPuertas(){
			return numeroPuertas;
		}
		string retornarModelo(){
			string mensaje=getModelo();
			return mensaje;
		}
		
		~Turismo(){
		}
};

