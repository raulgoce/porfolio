/* 1.Realice un programa que pida al usuario el nombre del fichero 
y a continuacion permita almacenar al usuario tantas frases como desee. */

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
	ofstream archivo;
	string nombreArchivo, textoUsuario;
	char respuesta;
	
	cout<<"Escriba el nombre de su archivo: "; getline(cin, nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out);//ios::out, sirve para reemplazar
	if(archivo.fail()){
		cout<<"No se ha podido abrir el archivo.";
		exit(1);
	}else{
		do{
			fflush(stdin);
			cout<<"Escriba la frase que desea introducir: ";
			getline(cin, textoUsuario);
			archivo<<textoUsuario<<endl;
			cout<<"¿Desea introducir otra frase?(s/n):";cin>>respuesta;
		}while((respuesta=='S')||(respuesta=='s'));
		
		archivo.close();
	}
}
