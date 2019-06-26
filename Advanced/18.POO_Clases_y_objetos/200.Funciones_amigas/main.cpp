//Funciones amigas(friend) / funciones externas a una clase, pero que mediante llamadas, se utilizaran

#include <iostream>
#include "Personaje.h"

using namespace std;

//funcion para modificar los valores de ataque y defensa de un objeto personaje
void modificar(Personaje &p, int at, int def){
	p.ataque = at;
	p.defensa = def;
}


int main(int argc, char** argv) {
	Personaje *nuevo_personaje = new Personaje(100,90);
	
	nuevo_personaje->mostrarDatos();
	
	modificar(*nuevo_personaje, 60,50);
	
	nuevo_personaje->mostrarDatos();
	
	
	return 0;
}
