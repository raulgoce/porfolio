#include <iostream>
using namespace std;

class Tablero{
	//Atributos
	private:
		int x,y;
	
	//Metodos
	public: 
		Tablero(int x, int y){
			this->x = x;
			this->y = y;
		}
		
		void moverArriba(int);
		void moverAbajo(int);
		void moverDerecha(int);
		void moverIzquierda(int);
		int getX();
		int getY();
		
};
