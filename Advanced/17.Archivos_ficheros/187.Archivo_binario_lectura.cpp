//Archivos Binarios


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;

struct Registro{
	char nombre[20];
	char apellido[20];
};

void escribir();
void leer();

int main(){
	escribir();
	leer();
	
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivoBin;
	
	archivoBin.open("Prueba.dat",ios::out | ios::binary);//asignar de arcivo tipo binario
	if(archivoBin.fail()){
		cout<<"No se puede crear el archivo. ";
		exit(1);
	}
	Registro persona;
	
	cout<<"Pidiendo datos."<<endl;
	cout<<"Escriba un nombre: ";cin.getline(persona.nombre,20,'\n');
	cout<<"Escriba un apellido: ";cin.getline(persona.apellido,20,'\n');
	
	//escribimos los datos en mi archivo binario
	archivoBin.write((char *)&persona, sizeof(Registro));//se pasa la posicion de memoria y el tamaño del struct
	archivoBin.close();
}

void leer(){
	ifstream archivoBin;
	archivoBin.open("Prueba.dat",ios::in | ios::binary);//asignar de arcivo tipo binario
		if(archivoBin.fail()){
		cout<<"No se puede crear el archivo. ";
		exit(1);
	}
	
	Registro persona;
	while(!archivoBin.eof()){
		archivoBin.read((char*)&persona,sizeof(Registro));
		if(!archivoBin.eof()){
			cout<<"Mostrando los datos leidos. "<<endl;
			cout<<"Nombre: "<<persona.nombre<<endl;
			cout<<"Apellido: "<<persona.apellido<<endl;
		}
	}

	archivoBin.close();
	
	
	
	archivoBin.close();
}
