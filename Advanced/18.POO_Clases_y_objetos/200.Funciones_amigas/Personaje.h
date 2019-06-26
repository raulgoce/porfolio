#include <iostream>
using namespace std;

class Personaje{
	friend void modificar(Personaje&,int, int);//Permitimos la funcion amiga
	
	private:
		int ataque;
		int defensa;
	
	public:
		
		Personaje(int _ataque, int defensa){
			this->ataque = ataque;
			this->defensa = defensa;
		}
		
		void mostrarDatos(){
			cout<<"Fuerza de ataque: "<<ataque<<endl;
			cout<<"Defensa: "<<defensa<<endl;
		}
};
