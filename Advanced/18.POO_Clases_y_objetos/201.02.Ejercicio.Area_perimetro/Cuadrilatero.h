#include <iostream>
using namespace std;

class Cuadrilatero{
	//Atributos
	private:
		float lado1, lado2;
		
	//Metodos	
	public:
		Cuadrilatero(float lado1, float lado2){ //constructor
			this->lado1 = lado1;
			this->lado2 = lado2;
		}
		
		Cuadrilatero(float lado){
			this->lado1 = this->lado2 = lado; //si es un cuadrado, todos los lados son iguales
		}
		
		float obtenerPerimetro();
		float obtenerArea();
};
