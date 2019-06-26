/* Asignacion dinamica de arrays

new: Reserva el numero de bytes solicitado por la declaracion.
delete: libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al user n calificaciones y almacenarlos en un arreglo dinamico
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para new y delete
using namespace std;

//Prototipo de funcion
void pedirNotas();
void mostrarNotas();

int numCalificaciones,*calif;


int main(){
	
	pedirNotas();
	mostrarNotas();
	
	//una vez hemos trabajado con nuestro array, tenemos que liberar el espacio.
	delete[] calif;
	
	getch();
	return 0;
}

//Definicion de la funcion

void pedirNotas(){
	cout<<"Escriba el numero de calificaciones: ";cin>>numCalificaciones;
	
	calif = new int[numCalificaciones]; //Crear array de tipo dinamico con el numero de posiciones pedidas
	for(int i=0; i<numCalificaciones; i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}
}

void mostrarNotas(){
	cout<<"\nMostrando notas del Usuario:\n";
	for(int i=0;i<numCalificaciones;i++){
		cout<<calif[i]<<endl;
	}
}
