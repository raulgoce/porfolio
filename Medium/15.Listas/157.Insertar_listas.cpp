/* Listas 

Tipos:									  Operaciones
1. Simplemente Enlazadas					1. Insertar
2. Doblemente Enlazadas						2. Mostrar
3. Circular Simplemente Enlazada			3. Buscar
4. Circular Doblemente Enlazada				4. Borrar


Insertar:
1. Crear nodo
2. Asignar a un nuevo nodo el dato del elemento que queremos
3. Crear dos nodos aux y al primero le asignaremos el primero
4. Insertar el elemento a la lista
*/




#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void InsertarLista(Nodo *&,int);

int main(){
	Nodo *lista = NULL;
	int dato;
	cout<<"Escriba un dato: ";cin>>dato;
	InsertarLista(lista,dato);
	
	getch();
	return 0;
}

//funcion para crear lista
void InsertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&(aux1->dato<n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista = nuevo_nodo;
	}else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
	cout<<"Elemento "<<n<<" insertado correctamente. ";
	
}
