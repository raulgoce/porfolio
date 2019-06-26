//Implementacion de la clase Persona

#include <iostream>

using namespace std;

class Persona{
	//atributos
	private:
		string nombre;
		int edad;
		string dni;
		
	//metodos
	public: 
		Persona(string _nombre, int _edad){//constructor
			nombre = _nombre;
			edad   = _edad;
		}
		
		Persona(string _dni){
			dni = _dni;
		}
		
		void correr(){
			cout<<"Soy "<<nombre<<" tengo "<<edad<<" años y estoy corriendo un maraton."<<endl;
		}
		void correr(int km){//pasamos un parametro mas que el otro metodo
			cout<<"He corrido "<<km<<" km."<<endl;
		}
		void mostrarDni(){
			cout<<"Mi dni es: "<<dni<<endl;
		}
		
};
