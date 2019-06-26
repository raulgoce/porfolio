/* 2.Haga un programa que guarde datos de clientes de un banco,
 los almacene en cola y por ultimo muestre los cientes. */


#include <iostream>
#include <conio.h>
#include <stdlib.h> //libreria para las pilas

using namespace std;
struct Cliente{
	char nombre[30];
	char clave[30];
	int edad;
};
struct Nodo{
	Cliente c;
	Nodo *siguiente;
};

void CargarClientes(Cliente&);
void insertarCola(Nodo *&, Nodo *&,Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&, Cliente&);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char respuesta;
	do{
		CargarClientes(c); //cargamos los datos del cliente
		insertarCola(frente,fin,c); //agregamos los datos a la cola
		cout<<"¿Desea agregar un nuevo cliente?(n/s)"; cin>>respuesta;
	
	}while((respuesta=='S')||(respuesta=='s'));
	cout<<"\nMostrando los clientes"<<endl;
		//eliminamos
		while(frente!=NULL)
		{
			suprimirCola(frente, fin, c);
			cout<<"Nombre: "<<c.nombre<<endl;
			cout<<"Clave: "<<c.clave<<endl;
			cout<<"Edad: "<<c.edad<<endl;
			cout<<endl;
			
		}
	system("pause"); //para que no borre los elementos 
	getch();
	return 0;
}
void CargarClientes(Cliente &c){
	fflush(stdin);
	cout<<"Agregar nuevo cliente"<<endl;
	cout<<"Nombre: ";cin.getline(c.nombre,30,'\n');
	cout<<"Clave: "; cin.getline(c.clave,30,'\n');
	cout<<"Edad: "; cin>>c.edad;
	cout<<"\n";
}

//funcion para crear una cola
void insertarCola(Nodo *&frente, Nodo *&fin,Cliente c){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->c=c;
	nuevo_nodo->siguiente=NULL;
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;

}

//funcion para mirar si la linea esta vacia
bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true:false;
}

//funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin, Cliente& c){
	c=frente->c;
	Nodo *aux=frente;
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}else{
		frente= frente->siguiente;
	}
	delete aux;
}
