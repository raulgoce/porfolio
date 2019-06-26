#include <iostream>
#include <string.h>
using namespace std;

class Barco{
	private:
		string nombre;
	public:
		Barco(string nombre){
			this->nombre=nombre;
		}
		~Barco(){
			
		}
		void indicarBarco(){
			cout<<"Desplazamiento por agua. "<<endl;
		}
		string getNombre(){
			return nombre;
		}
};
