/* 2.Haga un programa para C++, utilizando pilas que contenga el siguiente menu:
1-Insertar un caracter a la pila.
2-Mostrar todos los elementos de la pila.
3-Salir */


#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

void AgregarPila(Nodo *&, char);
void SacarPila(Nodo *&, char&);
int Menu();
int caso=0;

int main(){
	Nodo *pila = NULL;
	char dato, response;
	
	do{
		caso=Menu();
		switch(caso){
			case 1:
				cout<<"Escriba un nuevo numero: "; cin>>dato;
				AgregarPila(pila, dato);
					
			break;
			case 2:
				cout<<"Mostrando los elementos de la pila: "<<endl;
				while(pila!=NULL){
					SacarPila(pila, dato);
					if(pila!=NULL){
						cout<<dato<<" , ";
					}else{
						cout<<dato<<".";
					}
					
				}
				cout<<endl;
				system("pause"); //para que no borre los elementos 
			break;
			case 3:
			break;
		}	
		system("cls"); //funcion para limpiar la pantalla
	}while(caso!=3);
	
	
	
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


//funcion para mostrar el menu
int Menu(){
	cout<<"----Diga lo que quiera hacer---- \n";
	cout<<"1. Insertar elemento a la pila. "<<endl;
	cout<<"2. Quitar elementos a la pila. "<<endl;
	cout<<"3. Salir."<<endl;cin>>caso;
	return caso;
}



//funcion para crear una pila
void AgregarPila(Nodo *&pila, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila= nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado a pila correctamente"<<endl;
}
//funcion para quitar elemento de la pila
void SacarPila(Nodo *&pila, char &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
