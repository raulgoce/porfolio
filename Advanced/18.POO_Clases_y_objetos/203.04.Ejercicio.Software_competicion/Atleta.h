#include <iostream>
#include <string.h>
using namespace std;


class Atleta{
	//Atributos
	private:
		int numeroAtleta;
		string nombre;
		float tiempoCarrera;
	
	//metodos
	public: 
		Atleta(int numeroAtleta, string nombre, float tiempoCarrera){
			this->numeroAtleta= numeroAtleta;
			this->nombre = nombre;
			this->tiempoCarrera = tiempoCarrera;
		}	
		Atleta(){
		}
		~Atleta(){
		}
		
		float getTiempoCarrera();
		void mostrarDatos();
		static int indiceGanador(Atleta atletas[],int n);
};
