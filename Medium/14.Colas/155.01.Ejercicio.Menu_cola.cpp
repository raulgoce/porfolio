/* 1.Haga un programa en C++ usando colas para que contenga el siguiente menu:
1. Insertar cola
2. Mostrar cola
3. Salir
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
int Menu(int&);
void suprimirCola(Nodo *&,Nodo *&, int&);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	int caso;
	do{
		caso=Menu(caso);
		switch(caso){
			case 1:
				cout<<"Escriba un nuevo numero: "; cin>>dato;
				insertarCola(frente, fin,dato);
					
			break;
			case 2:
				cout<<"Mostrando los elementos de la cola: "<<endl;
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
				cout<<endl;
				system("pause"); //para que no borre los elementos 
			break;
			case 3:
			break;
		}	
		system("cls"); //funcion para limpiar la pantalla
	}while(caso!=3);
	
	
	
	getch();
	return 0;
}

//funcion para mostrar el menu
int Menu(int &caso){
	cout<<"----Diga lo que quiera hacer---- \n";
	cout<<"1. Insertar elemento a la cola. "<<endl;
	cout<<"2. Quitar elementos a la cola. "<<endl;
	cout<<"3. Salir."<<endl;cin>>caso;
	return caso;
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
