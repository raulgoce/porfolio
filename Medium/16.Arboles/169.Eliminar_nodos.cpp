//Eliminar nodos de arbol

#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre; //es importante a la hora de eliminar	
};

Nodo *arbol=NULL;
Nodo *CrearNodo(int,Nodo*);
void InsertarNodo(Nodo*&, int,Nodo*);
void MostrarArbol(Nodo*,int);
bool Buscar(Nodo*,int);
void preOrder(Nodo*);
void inOrder(Nodo*); 
void postOrder(Nodo*);
void eliminar(Nodo*,int);
void EliminarNodo(Nodo*);
Nodo *minimo(Nodo*);
void reemplazar(Nodo*,Nodo* );
void destruirNodo(Nodo*);
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
		cout<<"6. Post Orden"<<endl;
		cout<<"7. Eliminar un elemento del arbol"<<endl;
		cout<<"8. Salir"<<endl;	
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Escriba el numero que quiere introducir: ";cin>>dato;
				cout<<"\n";
				InsertarNodo(arbol,dato,NULL);
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
			case 6:
				cout<<"Recorrido en PostOrden: ";
				postOrder(arbol);
				system("pause");
			break;	
			case 7:
				cout<<"Escriba el elemento que desea eliminar: ";
				cin>>dato;
				eliminar(arbol, dato);
				system("pause");
			break;
		}
		system("cls");
	}while(opcion!=8);
}
//funcion para crear un nodo
Nodo *CrearNodo(int n,Nodo*padre){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	nuevo_nodo->padre=padre;
}
//funcion para insertar un nodo en el arbol
void InsertarNodo(Nodo*&arbol, int n, Nodo*padre){
	if(arbol==NULL){//miramos si el arbol esta vacio
		Nodo *nuevo_nodo=CrearNodo(n,padre);
		arbol=nuevo_nodo;
	}else{ //si el arbol ya tiene uno o mas nodos
		int valorRaiz= arbol->dato; //obtenemos el valor de la raiz
		if(n<valorRaiz){//si el valor que queremos introducir es menor que la raiz
			InsertarNodo(arbol->izq,n,arbol);
		}else{
			InsertarNodo(arbol->der,n,arbol);
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

//funcion de recorrido en profundidad postOrder
void postOrder(Nodo* arbol){
	if(arbol==NULL){
		return;
	}else{
		inOrder(arbol->izq);
		preOrder(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//funcion para eliminar un nodo del arbol
void eliminar(Nodo*arbol, int n){
	if(arbol==NULL){
		return;
	}else if(n<arbol->dato){
		eliminar(arbol->izq,n);//si el valor es menor, busca por la izquierda
	}else if(n>arbol->dato){
		eliminar(arbol->der,n);//si el valor es mayor, busca por la derecha
	}else{
		EliminarNodo(arbol);
	}
}
//funcion para determinar el nodo mas izquierdo posible
Nodo *minimo(Nodo*arbol){
	if(arbol==NULL){
		return NULL;
	}
	if(arbol->izq){//miramos que tenga hijo izquierdo y hacemos recursividad para mirar el mas a la izquierda
		return minimo(arbol->izq);
	}else{//de no tener, quiere decir que ese ya es el de mas a la izquierda
		return arbol;
	}

}
//funcion para reemplazar
void reemplazar(Nodo*arbol,Nodo*nuevo_nodo){
	if(arbol->padre){//al arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato==arbol->padre->izq->dato){
			arbol->padre->izq=nuevo_nodo;
		}else if(arbol->dato==arbol->padre->der->dato){
			arbol->padre->izq=nuevo_nodo;
		}
	}
	if(nuevo_nodo){//hay que asignarle su nuevo padre
		nuevo_nodo->padre=arbol->padre;
	}
}

//funcion para eliminar el nodo encontrado mas a la izquierda
void EliminarNodo(Nodo* nodoEliminar){
	if(nodoEliminar->izq&&nodoEliminar->der){ //miramos si el nodo tiene hijos de ambos lados
		Nodo *menor=minimo(nodoEliminar->der);
		nodoEliminar->dato=menor->dato;
		EliminarNodo(menor);
	}else if(nodoEliminar->izq){//si tiene hijo izquierdo lo reemplazamos para no desturi todo y lo eliminamos. 
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if(nodoEliminar->der){//si tiene hijo derecho
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{ //mirar que no tenga hijos, que sea hoja
		reemplazar(nodoEliminar,NULL); //lo reemplazamos por null ya que no tiene hijos
		destruirNodo(nodoEliminar);
	}
}

//funcion para destruir nodo
void destruirNodo(Nodo* nodoEliminar){
	nodoEliminar->izq=NULL;
	nodoEliminar->der=NULL;
	delete nodoEliminar;
}
