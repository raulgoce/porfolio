//Array de objetos


#include <iostream>
#include "Alumno.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Alumno alumnos[4];//creacion de un array de objetos estaticos
	Alumno* alumnos2 = new Alumno[3]; //creacion de un array de objetos dinamicos
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->pedirDatos();
		cout<<endl;
	}
	cout<<"Mostrando las notas."<<endl;
	for(int i=0;i<3;i++){
		(alumnos2+i)->mostrarNotas();
		cout<<endl;
	}
	return 0;
}
