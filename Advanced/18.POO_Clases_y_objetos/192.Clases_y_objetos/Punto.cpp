#include "Punto.h" //incluimos el archivo de cabecera donde esta nuestra clase

void Punto::setX(int valorX){//le decimos a que clase pertenece -> Punto::
	x = valorX;
}
void Punto::setY(int valorY){
	y = valorY;
}
int Punto::getX(){
	return x;
}
int Punto::getY(){
	return y;
}

