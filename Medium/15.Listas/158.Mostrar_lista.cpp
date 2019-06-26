/* Listas 

Tipos:									  Operaciones
1. Simplemente Enlazadas					1. Insertar
2. Doblemente Enlazadas						2. Mostrar
3. Circular Simplemente Enlazada			3. Buscar
4. Circular Doblemente Enlazada				4. Borrar


Mostrar:
1. Crear nodo
2. Igualar el nodo creado a la lista
3. Recorrer la lista de inicio a fin
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
	do{
		cout<<"----Diga lo que quiera hacer---- \n";
		cout<<"1. Insertar elemento a la lista. "<<endl;
		cout<<"2. Quitar elementos a la lista. "<<endl;
		cout<<"3. Salir."<<endl;cin>>caso;
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
				break;
			}	
		system("cls"); //funcion para limpiar la pantalla	
	}while(caso!=3);
	
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
