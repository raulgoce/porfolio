/* Quitar elementos de una pila 

1. Crear una variable *aux de tipo Nodo
2. Igualar n a aux->dato. 
3. Pasar pila a siguiente nodo
4. Eliminar aux

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
void SacarPila(Nodo *&, int&);


int main(){
	Nodo *pila=NULL;
	int dato;
	
	cout<<"Escriba un nuevo numero: "; cin>>dato;
	AgregarPila(pila, dato);
	cout<<"Escriba un nuevo numero: "; cin>>dato;
	AgregarPila(pila, dato);
	
	cout<<"Sacando los elementos de la pila: ";
	while(pila!=NULL){//mientras no sea el final de la pila
		SacarPila(pila, dato);
		if(pila!=NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	
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
//funcion para quitar elemento de la pila
void SacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
