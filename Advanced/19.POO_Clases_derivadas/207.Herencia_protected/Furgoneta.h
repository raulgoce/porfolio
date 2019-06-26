#include <iostream>
#include <string.h>
#include "Vehiculo.h"

using namespace std;
class Furgoneta: protected Vehiculo{
	private: 
		int carga;
	public: 
		Furgoneta(string marca, string color, string modelo,int carga):Vehiculo(marca, color, modelo){
			this->carga = carga; 
		}
		
		int getCarga(){
			return carga;
		}
		string verColor(){
			string c=getColor();
			return c;
		}
};
