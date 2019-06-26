/* 11.Haga una estructura llamada alumno, en la cual se tendran los siguientes campos
Nombre, edad y promedio. Pida los datos al usuario para 3 alumnos, compruebe cual de los 3
tiene el mejor promedio y posteriormente imprima sus datos.*/


#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumnos[3], *puntero_alumnos=alumnos;

void AskData();
void CheckBest(alumno *);


int main(){
	AskData();
	CheckBest(puntero_alumnos);
	getch();
	return 0;
}

//funcion para pedir datos al usuario del alumno
void AskData(){
	cout<<"Indique los datos de los alumnos: \n";
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<i+1<<". Indique el nombre del alumno: ";cin.getline((puntero_alumnos+i)->nombre,30,'\n');
		cout<<i+1<<". Indique la edad del alumno: ";cin>>(puntero_alumnos+i)->edad;
		cout<<i+1<<". Indique el promedio del alumno: ";cin>>(puntero_alumnos+i)->promedio;
		cout<<"\n";
	}
	
}

//funcion para comprobar el mejor promedio
void CheckBest(alumno *puntero_alumnos){
	float big=0.0;
	int pos=0;
	for(int i=0;i<3;i++){
		if((puntero_alumnos+i)->promedio>big){
			big=(puntero_alumnos+i)->promedio;
			pos=i;
		}
	}
	cout<<"El alumno con mejor promedio es : "<<(puntero_alumnos+pos)->nombre;
}
