#include <iostream>
#include <string.h>
using namespace std;

class Avion{
	private:
		string modelo;
	public:
		Barco(string modelo){
			this->modelo = modelo;
		}
		~Barco(){
			
		}
		void indicarAvion(){
			cout<<"Desplazamiento por aire. "<<endl;
		}
		string getModelo(){
			return modelo;
		}
};
