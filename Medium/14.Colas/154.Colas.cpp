/*Colas    fifo->first in, first out. Tienen un frente y un final.

Insertar
1. Crear espacio en memoria.
2. Asingar ese nuevo nodo al dato que queremos insertar.
3. Asignar los punteros frente y fin hacia el nuevo nodo. 

Eliminar
1. Obtener el valor del nodo.
2. Crear un nodo auxiliar y saignarle el frente de la cola.
3. Eliminar el nodo del frente de la cola. 

*/


#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&, int&);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	
	cout<<"Inserte un numero:"; cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nInserte un numero:"; cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nInserte un numero:\n"; cin>>dato;
	insertarCola(frente,fin,dato);
	
	
	//eliminamos
	while(frente!=NULL)
	{
		suprimirCola(frente, fin, dato);
		if(frente !=NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<" .";
		}
	}
	getch();
	return 0;
}

//funcion para crear una cola
void insertarCola(Nodo *&frente, Nodo *&fin,int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	cout<<"Elemento "<<n<<" insertado en la cola."<<endl;
}
//funcion para mirar si la linea esta vacia
bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true:false;
}

//funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin, int& n){
	n=frente->dato;
	Nodo *aux=frente;
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}else{
		frente= frente->siguiente;
	}
	delete aux;
}
