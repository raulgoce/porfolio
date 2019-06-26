/* Listas 

Tipos:									  Operaciones
1. Simplemente Enlazadas					1. Insertar
2. Doblemente Enlazadas						2. Mostrar
3. Circular Simplemente Enlazada			3. Buscar
4. Circular Doblemente Enlazada				4. Borrar


Eliminar lista:
1. Crear nodo aux e igualarlo a la lista
2. Guardar el dato que queremos eliminar dentro de aux
3. Pasar la lista al siguiente nodo
4. Eliminar el auxiliar
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
void MostrarLista(Nodo *);
void Menu(Nodo *);
void BuscarLista(Nodo*,int);
void EliminarNodo(Nodo*&,int);
void EliminarLista(Nodo*&,int&);

int main(){
	Nodo *lista = NULL;
	int dato;

	Menu(lista);


	MostrarLista(lista);
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
	cout<<"Elemento "<<n<<" insertado correctamente. \n";
	
}
//funcion para el menu
void Menu(Nodo * lista){
	int caso,dato;
	char respuesta;
	do{
		cout<<"----Diga lo que quiera hacer---- \n";
		cout<<"1. Insertar elemento a la lista. "<<endl;
		cout<<"2. Quitar elementos a la lista. "<<endl;
		cout<<"3. Buscar un elemento en la lista."<<endl;
		cout<<"4. Borrar un elemento en la lista."<<endl;
		cout<<"5. Borrar lista."<<endl;
		cout<<"6. Salir."<<endl;
		cin>>caso;
		switch(caso){
				case 1:
					cout<<"Escriba un dato: ";cin>>dato;
					InsertarLista(lista,dato);
					system("pause");	
				break;
				case 2:
					MostrarLista(lista);
					cout<<endl;
					system("pause"); //para que no borre los elementos 
				break;
				case 3:
					cout<<"Escriba un elemento para buscar en la lista: "; cin>>dato;
					BuscarLista(lista,dato);
					system("pause"); //para que no borre los elementos 
				break;
				case 4:
					cout<<"Escriba un elemento para borrar en la lista: "; cin>>dato;
					EliminarNodo(lista,dato);
					system("pause"); //para que no borre los elementos 
				break;
				case 5:
					cout<<"¿Esta seguro de borrar la lista? (n/s)";cin>>respuesta;
					if((respuesta=='S')||(respuesta=='s')){
						EliminarLista(lista,dato);
						cout<<"Lista eliminada.\n"; 
						system("pause"); //para que no borre los elementos 
					}
				break;
			}	
		system("cls"); //funcion para limpiar la pantalla	
	}while(caso!=6);
	
}
//funcion para mostrar la lista
void MostrarLista(Nodo *lista){
	Nodo *actual =new Nodo();
	actual=lista;
	while(actual!=NULL){
		cout<<actual->dato<<"->";
		actual=actual->siguiente;
	}
}

//funcion para buscar un elemento en la lista
void BuscarLista(Nodo *lista,int n){
	Nodo*actual=new Nodo();
	bool flag=false;
	actual=lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			flag=true;
		}
		actual = actual->siguiente;
	}
		
	if(flag==true){
		cout<<"El elemento "<<n<<" se encuentra en la lista. "<<endl;
	}else{
		cout<<"El elemento "<<n<<" no se encuentra en la lista. "<<endl;
	}
}

//Funcion para borrar un elemento de la lista
void EliminarNodo(Nodo *&lista, int n){
	if(lista!=NULL){
		Nodo* aux_borrar;
		Nodo*anterior=NULL;
		aux_borrar=lista;
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar==NULL){
			cout<<"El elemento no se encuentra en la lista";
		}
		else if(anterior==NULL){
			lista=lista->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
		cout<<"Elemento "<<n<<" borrado de la lista. "<<endl;
	}
}

//funcion para eliminar una lista entera
void EliminarLista(Nodo*& lista,int& n){
	Nodo *aux=new Nodo();
	n = aux->dato;
	lista= aux->siguiente;
	delete aux;
}
