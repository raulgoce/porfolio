/* Pilas   estructuras lifo-> last in first out el primero en etrar, será el primero en salir, es como poner cosas 
		  en una caja, para poder sacar la primera que entró hay que sacar todo antes. 
Cear->
1. Crear el espacio en memoria para almacenar un nodo. 
2. Cargar el valor dentro del nodo(dato)
3. Cargar el puntero pila dentro del nodo(*siguiente).
4. Asignar el nuevo nodo a pila. 
*/



#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void AgregarPila(Nodo *&, int);

int main(){
	Nodo *pila=NULL;
	int n1,n2;
	
	cout<<"Escriba un nuevo numero: "; cin>>n1;
	AgregarPila(pila, n1);
	cout<<"Escriba un nuevo numero: "; cin>>n2;
	AgregarPila(pila, n2);
	
	getch();
	return 0;
}

//funcion para crear una pila
void AgregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila= nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado a pila correctamente"<<endl;
}

