//Funciones de posicionamiento - escritura



#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;


void escribir();


int main(){
	escribir();
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
