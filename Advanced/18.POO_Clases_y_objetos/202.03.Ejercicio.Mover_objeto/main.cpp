/* 3.Construya un programa que eprmita dirigir el movimiento de un objeto dentro de 
un tablero y actualice su posicion dentro del mismo. Los movimientos posibles son:
arriba, abajo, izquierda, derecha. Tras cada movimiento el programa mostrar la nueva
direccion elegida y las coordenadas de situacion del objeto dentro del tablero.*/

#include <iostream>
#include <stdlib.h>
#include "Tablero.h"
using namespace std;


int main(int argc, char** argv) {
	Tablero* obj1;
	int x, y,opcion,n;
	cout<<"Escriba la posicion inicial del valor X: ";cin>>x;
	cout<<"Escriba la posicion inicial del valor Y: ";cin>>y;
	
	obj1= new Tablero(x,y);
	do{
		cout<<"\n\t.:MENU:."<<endl;
		cout<<"1. Mover el objeto hacia arriba."<<endl;
		cout<<"1. Mover el objeto hacia abajo."<<endl;
		cout<<"1. Mover el objeto hacia la derecha."<<endl;
		cout<<"1. Mover el objeto hacia la izquierda."<<endl;
		cout<<"5. Salir."<<endl;
		cout<<"Opcion"<<endl;cin>>opcion;
		if(opcion>=1 && opcion<=4){
			cout<<"Escriba el numero de posiciones que desea mover: "; cin>>n;
		}
		switch(opcion){
			case 1:
				obj1->moverArriba(n);
			break;
			case 2:
				obj1->moverAbajo(n);
			break;
			case 3:
				obj1->moverDerecha(n);
			break;
			case 4:
				obj1->moverIzquierda(n);
			break;
		}
		cout<<"Posicion actual del objeto (X,Y): "<<obj1->getX()<<","<<obj1->getY()<<endl;
		system("pause");
		system("cls");
	}while(opcion!=5);
	return 0;
}
