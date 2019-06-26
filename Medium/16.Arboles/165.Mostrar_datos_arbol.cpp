//Mostrar elementos de arbol binario de busqueda abb

#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;	
};

Nodo *arbol=NULL;
Nodo *CrearNodo(int);
void InsertarNodo(Nodo*&, int);
void MostrarArbol(Nodo*,int);
void Menu();

int main(){
	Menu();
	getch();
	return 0;
}

void Menu(){
	int dato, opcion,cont=0;
	do{
		cout<<"MENU"<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar el arbol completo"<<endl;
		cout<<"3. Salir"<<endl;cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Escriba el numero que quiere introducir: ";cin>>dato;
				cout<<"\n";
				InsertarNodo(arbol,dato);
				system("pause");
			break;
			case 2:
				cout<<"Mostrando el arbol completo\n";
				MostrarArbol(arbol, cont);
				cout<<"\n";
				system("pause");
			break;
		}
		system("cls");
	}while(opcion!=3);
}
//funcion para crear un nodo
Nodo *CrearNodo(int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
}

void InsertarNodo(Nodo*&arbol, int n){
	if(arbol==NULL){//miramos si el arbol esta vacio
		Nodo *nuevo_nodo=CrearNodo(n);
		arbol=nuevo_nodo;
	}else{ //si el arbol ya tiene uno o mas nodos
		int valorRaiz= arbol->dato; //obtenemos el valor de la raiz
		if(n<valorRaiz){//si el valor que queremos introducir es menor que la raiz
			InsertarNodo(arbol->izq,n);
		}else{
			InsertarNodo(arbol->der,n);
		}
	}
}

//funcion para mostrar el arbol
void MostrarArbol(Nodo*arbol, int cont){
	if(arbol==NULL){
		return;
	}else{
		MostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		MostrarArbol(arbol->izq,cont+1);
	}
}
