//A�adir texto a un archivo


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;


void aniadir();

int main(){
	aniadir();
	
	system("pause");
	return 0;
}

//funcion para a�adir texto un archivo
void aniadir(){
	ofstream archivo;
	string texto;
	cout<<"Escriba el texto a aniadir: "; getline(cin,texto);
	archivo.open("Programacion.txt",ios::app);//ios::app para a�adir texto al final
	
	if(archivo.fail()){
		cout<<"El archivo no se puedo abrir. ";
		exit(1);
	}else{
		//archivo<<"Prueba de a�adir texto.\n";
		archivo<<texto<<endl;
	}
	archivo.close();
}
