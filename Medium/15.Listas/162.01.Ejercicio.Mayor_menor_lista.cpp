/* 1.Cree una lista que almacene "n" numeros enteros y calcule el menor y mayor. */



#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void InsertarLista(Nodo *&,int);
int big=0,small=99999;

int main(){
	Nodo *lista = NULL;
	char respuesta;
	int dato;
	do{
		cout<<"Escriba un elemento: ";cin>>dato;
		InsertarLista(lista,dato);
		cout<<"¿Quiere poner otro elemento?(s/n)";cin>>respuesta;
	}while((respuesta=='S')||(respuesta=='s'));
	cout<<"El mayor elemento de la lista es el "<<big<<endl;
	cout<<"El menor elemento de la lista es el "<<small<<endl;
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
	if(nuevo_nodo->dato>big){
		big=nuevo_nodo->dato;
	}
	if(nuevo_nodo->dato<small){
		small=nuevo_nodo->dato;
	}
	cout<<"Elemento "<<n<<" insertado correctamente. \n";
	
}
