//inOrden

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
bool Buscar(Nodo*,int);
void preOrder(Nodo*);//primero se mira la raiz, luego la izquierda y luego la derecha
void inOrder(Nodo*);//primero se mira la parte izquierda, luego la raiz y luego la derecha 
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
		cout<<"3. Buscar elemento en arbol"<<endl;
		cout<<"4. Pre Orden"<<endl;
		cout<<"5. In Orden"<<endl;
		cout<<"6. Salir"<<endl;	
		cin>>opcion;
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
			case 3:
				cout<<"Escriba el numero que quiera buscar: ";cin>>dato;
				if((Buscar(arbol, dato))==true){
					cout<<"El elemento esta en el arbol."<<endl;
				}else{
					cout<<"El elemento no esta en el arbol."<<endl;
				}
				cout<<"\n";
				system("pause");
			break;
			case 4:
				cout<<"Recorrido en PreOrden: ";
				preOrder(arbol);
				system("pause");
			break;
			case 5:
				cout<<"Recorrido en InOrden: ";
				inOrder(arbol);
				system("pause");
			break;	
		}
		system("cls");
	}while(opcion!=6);
}
//funcion para crear un nodo
Nodo *CrearNodo(int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
}
//funcion para insertar un nodo en el arbol
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

//funcion para buscar en un arbol
bool Buscar(Nodo*arbol, int n){
	if(arbol==NULL){
		return false;
	}else if(arbol->dato==n){
		return true;
	}else if(n<arbol->dato){
		return Buscar(arbol->izq, n);
	}else{
		return Buscar(arbol->der, n);
	}
}
//funcion de recorrido en profundidad preOrder
void preOrder(Nodo*arbol){
	if(arbol==NULL){
		return;
	}else{
		cout<<arbol->dato<<" - ";
		preOrder(arbol->izq);
		preOrder(arbol->der);
	}
}

//funcion de recorrido en profundidad inOrder
void inOrder(Nodo* arbol){
	if(arbol==NULL){
		return;
	}else{
		inOrder(arbol->izq);
		cout<<arbol->dato<<" - ";
		preOrder(arbol->der);
	}
}
