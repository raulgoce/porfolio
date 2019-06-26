//Funciones de posicionamiento - escritura



#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;


void escribir();
void leer();


int main(){
	escribir();
	leer();
	system("pause");
	return 0;
}


void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt",ios::out);
	if(archivo.fail()){
		cout<<"El archivo no se pudo abrir.";
		exit(1);
	}else{
		cout<<"Posicion actual: "<<archivo.tellp()<<endl;//posicion actual del cursor en el archivo
		archivo<<"Estoy aprendiendo C++"<<endl;
		archivo.seekp(6);//posiciona el cursor en N para escribir a partir de ahi
		archivo<<"haciendo un curso en C++";
		cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	}
	archivo.close();
}

void leer(){
	ifstream archivo;
	
	archivo.open("posicion.txt",ios::in);
	if(archivo.fail()){
		cout<<"El archivo no se pudo abrir.";
		exit(1);
	}else{
		string texto;
		archivo.seekg(5);//funcion para leer a partir de una posicion
		cout<<"Posicion actual: "<<archivo.tellg()<<endl;
		getline(archivo,texto);
		cout<<texto<<endl;
		
	}
	archivo.close();
}
