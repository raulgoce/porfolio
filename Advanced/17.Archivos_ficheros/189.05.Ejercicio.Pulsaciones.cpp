/* 5.Cree un archivo binario donde almacenar un registro que contenga
las pulsaciones de un atleta en una determinada hora.
Opciones:
1. Comenzar a digitar las pulsaciones.
2. Añadir mas pulsaciones.
3. Mostrar las pulsaciones registradas.
4. Salir.
*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;

struct Datos{
	float hora;
	int pulsaciones;
};


void escribir();
void leer();
void aniadir();
void menu();


int main(){
	menu();
	
	system("pause");
	return 0;
}
//funcion del menu
void menu(){
	char respuesta;
	int opcion;
	do{
		cout<<"\t .:MENU:."<<endl;
		cout<<"1. Comenzar a digitar las pulsaciones. "<<endl;
		cout<<"2. Añadir mas pulsaciones."<<endl;
		cout<<"3. Mostrar las pulsaciones registradas."<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Opcion: ";cin>>opcion;
		switch(opcion){
			case 1:
				escribir();
				system("pause");
			break;
			case 2:
				aniadir();
				system("pause");
			break;
			case 3:
				leer();
				system("pause");
			break;
			case 4:
			break;
		}
		system("cls");
	}while(opcion!=4);
}

//funcion para crear el archivo binario
void escribir(){
	ofstream archivoBin;
	
	archivoBin.open("Pulsaciones.dat",ios::out | ios::binary);
	if(archivoBin.fail()){
		cout<<"No se puede crear el archivo. ";
		exit(1);
	}
	Datos pulso;
	cout<<"Pidiendo datos."<<endl;
	cout<<"Inserte la hora: ";cin>>pulso.hora;
	cout<<"Inserte pulsaciones: ";cin>>pulso.pulsaciones;
	
	//escribimos los datos en mi archivo binario
	archivoBin.write((char *)&pulso, sizeof(Datos));
	archivoBin.close();
}
void aniadir(){
	ofstream archivoBin;
	
	archivoBin.open("Pulsaciones.dat", ios::app | ios::binary);
	if(archivoBin.fail()){
		cout<<"No se puede abrir el archivo. ";
		exit(1);
	}
	Datos pulso;
	cout<<"Pidiendo datos."<<endl;
	cout<<"Inserte la hora: ";cin>>pulso.hora;
	cout<<"Inserte pulsaciones: ";cin>>pulso.pulsaciones;
	
	//escribimos los datos en mi archivo binario
	archivoBin.write((char *)&pulso, sizeof(Datos));
	archivoBin.close();
}

void leer(){
	ifstream archivoBin;
	
	archivoBin.open("Pulsaciones.dat",ios::in | ios::binary);
	if(archivoBin.fail()){
		cout<<"No se puede crear el archivo. ";
		exit(1);
	}
	
	Datos pulso;
	cout<<"Mostrando pulsaciones."<<endl;
	while(!archivoBin.eof()){	
		archivoBin.read((char*)&pulso, sizeof(Datos));
		if(!archivoBin.eof()){
			cout<<"Hora: "<<pulso.hora<<endl;
			cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
		}	
	}
	archivoBin.close();
}
