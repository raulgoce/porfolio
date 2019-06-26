//clases compuestas, es aquella en la que en sus atributos tiene elementos de otras clases


#include <iostream>
#include <string.h>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante{
	private:
		string codigo;
		float promedio;
		Expediente exp;
		Direccion dir;
	
	public:
		Estudiante(string codigo, float promedio, int numeroExp, string direccion) : exp(numeroExp),dir(direccion){//los atributos de otras clases
			this->codigo=codigo;
			this->promedio=promedio;
		}
		void mostrarDatos(){
			cout<<"Codigo: "<<codigo<<endl;
			cout<<"Promedio: "<<promedio<<endl;
			cout<<"Numero de Expediente: "<<exp.getNumExp()<<endl;
			cout<<"Direccion: "<<dir.getDireccion()<<endl;
		}
};
