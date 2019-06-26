//Ficheros
#include <iostream>
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
//funcion para crear un archivo
void escribir(){
	ofstream archivo;//asignamos un valor al archivo que vamos a crear
	string nombreArchivo,frase;
	cout<<"Escriba el nombre del archivo: ";
	getline(cin,nombreArchivo); //para guardar strings
	
	archivo.open(nombreArchivo.c_str(),ios::out); //Abrimos el archivo, pero como no existe lo crea, se puede poner con ruta absoluta
	if(archivo.fail()){//condicional para mirar si ha habido algun error al intentar crear o abrir el archivo
		cout<<"No se pudo abrir el archivo.";
		exit(1); //salimos del programa ya que todo ha fallado. 
	}else{
		cout<<"Escriba su texto a guardar: "<<endl;
		getline(cin,frase);
		archivo<<frase;
		//archivo<<"Hola, estoy creando un archivo de texto con el nombre "<<nombreArchivo<<endl; //ponemos lo que queramos introducir
		
		archivo.close();//cerramos el archivo
	}
}
