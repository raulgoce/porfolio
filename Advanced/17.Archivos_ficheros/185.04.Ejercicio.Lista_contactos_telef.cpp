/* 4. Cree un programa para guardar numeros telefonicos que
muestre un menu con las siguientes opciones:
1. Crear(nombre, apellidos, telefono)
2. Agregar mas contactos(nombre, apellidos, telefono)
3. Visualizar los contactos existentes
*/


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;
struct Datos{
	string nombre,apellido, telefono;
}datos;
void crear();
void aniadir();
void lectura();
void menu();

int main(){
	menu();
	
	system("pause");
	return 0;
}

//funcion del menu principal
void menu(){
	int opcion; 
	do{
		cout<<".:AGENDA_TELEFONICA:."<<endl;
		cout<<"Diga que opcion quiere:"<<endl;
		cout<<"1. Crear(nombre, apellidos, telefono)"<<endl;
		cout<<"2. Agregar mas contactos(nombre, apellidos, telefono)"<<endl;
		cout<<"3. Visualizar los contactos existentes"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				crear();
				system("pause");
			break;
			case 2:
				aniadir();
				system("pause");
			break;
			case 3:
				lectura();
				system("pause");
			break;
		}
		system("cls");
	}while(opcion!=4);
	
}
//funcion para crear un archivo
void aniadir(){
	ofstream archivo;
	char respuesta;
	
	archivo.open("Agenda_telefonica.txt",ios::app);
	
	if(archivo.fail()){
		cout<<"No se ha podido abrir el archivo.";
		exit(1);
	}else{
		do{
			fflush(stdin);
			cout<<"Nombre: ";getline(cin,datos.nombre);
			cout<<"Apellido: ";getline(cin,datos.apellido);
			cout<<"Telefono: ";getline(cin,datos.telefono);
					
			archivo<<"Nombre: "<<datos.nombre<<endl;
			archivo<<"Apellido: "<<datos.apellido<<endl;
			archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
					
			cout<<"¿Desea introducir otro contacto?(s/n):";cin>>respuesta;
		}while((respuesta=='S')||(respuesta=='s'));
		archivo.close();
	}
}

//funcion para añadir contactos
void crear(){
	ofstream archivo;
	char respuesta;
	
	archivo.open("Agenda_telefonica.txt",ios::out);
	if(archivo){
		cout<<"El documento ya existe. "<<endl;
	}else{
		if(archivo.fail()){
			cout<<"No se ha podido abrir el archivo.";
			exit(1);
		}else{
			archivo<<"\tAgenda Telefonica\t"<<endl;
			do{
				fflush(stdin);
				cout<<"Nombre: ";getline(cin,datos.nombre);
				cout<<"Apellido: ";getline(cin,datos.apellido);
				cout<<"Telefono: ";getline(cin,datos.telefono);
					
				archivo<<"Nombre: "<<datos.nombre<<endl;
				archivo<<"Apellido: "<<datos.apellido<<endl;
				archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
					
				cout<<"¿Desea introducir otro contacto?(s/n):";cin>>respuesta;
			}while((respuesta=='S')||(respuesta=='s'));
				
			archivo.close();
		}
	}
}

//funcion para leer el archivo
void lectura(){
	ifstream archivo; 
	string texto; 
	archivo.open("Agenda_telefonica.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo. ";
		exit(1);
	}else{
		while(!archivo.eof()){
			getline(archivo,texto);
			cout<<texto<<endl;
		}
	}
	archivo.close();
}


