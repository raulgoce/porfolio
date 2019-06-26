/* 2.Realice un programa que pida al usuario el nombre del fichero e imprima
su contenido.*/


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>//libreria para los ficheros

using namespace std;

void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}

//funcion para leer un archivo
void lectura(){
	ifstream archivo; //para leer un archivo se usa ifstream y no ofstream
	string texto,nombreArchivo; //string para almacenar el texto del documento
	cout<<"Escriba el nombre del fichero: "; getline(cin, nombreArchivo);
	archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo.
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo. ";
		exit(1);
	}else{
		while(!archivo.eof()){//mientras no sea el final del archivo->!eof()
			getline(archivo,texto);
			cout<<texto<<endl;
		}
	}
	archivo.close();
}
