/* 2.Cree una lista que almacene "n" numeros enteros y calcule la suma y el promedio. */



#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void InsertarLista(Nodo *&,int);
int suma,cont;
float promedio;

int main(){
	Nodo *lista = NULL;
	char respuesta;
	int dato;
	do{
		cout<<"Escriba un elemento: ";cin>>dato;
		InsertarLista(lista,dato);
		cout<<"¿Quiere poner otro elemento?(s/n)";cin>>respuesta;
	}while((respuesta=='S')||(respuesta=='s'));
	cout<<"La suma de los elementos es "<<suma<<endl;
	cout<<"El promedio de los elementos es "<<suma/cont<<endl;
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
	suma+=nuevo_nodo->dato;
	cont++;
	cout<<"Elemento "<<n<<" insertado correctamente. \n";
	
}
