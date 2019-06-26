//Guardian de inclusion multiple, se pone en la clase padre
#ifndef VEHICULO_H
#define VEHICULO_H //->poner al final #endif


#include <iostream>
#include <string.h>

using namespace std;

class Vehiculo{
	private:
		string marca;
		string color;
	protected:
		string modelo;
		string getModelo(){
			return modelo;
		}
		
	public:
		Vehiculo(string marca, string color, string modelo){
			this->marca=marca;
			this->color=color;
			this->modelo=modelo;
		}
		void setColor(string color){
			this->color=color;
		}
		string getMarca(){
			return marca;
		}
		string getColor(){
			return color;
		}
};

#endif
