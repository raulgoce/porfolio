/* 3.Realice un programa que pida al usuario el nombre del archivo
al que quiere a�adir texto y lo a�ada hasta que quiera.*/

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
	string texto,nombre_archivo;
	char respuesta;
	cout<<"Escriba el nombre del archivo: ";getline(cin,nombre_archivo);

	archivo.open(nombre_archivo.c_str(),ios::app);//ios::app para a�adir texto al final
	
	if(archivo.fail()){
		cout<<"El archivo no se puedo abrir. ";
		exit(1);
	}else{
		do{
			fflush(stdin);
			cout<<"Escriba la frase que desea introducir: ";
			getline(cin, texto);
			archivo<<texto<<endl;
			cout<<"�Desea introducir otra frase?(s/n):";cin>>respuesta;
		}while((respuesta=='S')||(respuesta=='s'));
	}
	archivo.close();
}
