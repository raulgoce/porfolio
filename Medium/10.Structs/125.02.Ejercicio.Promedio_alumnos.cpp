/* 2.Haga una estructura llamada alumno, en la cual se tendrán los siguientes
campos: nombre, edad, promedio. Pida datos al usuario para 3 alumnos, comprobar
cual de los 3 tiene el mejor promedio y posteriormente imprimirlos. */


#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char name[20];
	int age;
	float avg;
}alumnos[3];

int main(){
	float mayor=0;
	int position;
	for(int i=0; i<3; i++){
		//Guardando datos para 3 alumnos
		fflush(stdin);
		cout<<i+1<<". Escriba el nombre del alumno: "; cin.getline(alumnos[i].name,20,'\n');
		cout<<i+1<<". Escriba su edad: "; cin>>alumnos[i].age;
		cout<<i+1<<". Escriba su promedio: "; cin>>alumnos[i].avg;
		cout<<"\n";
		//comprobando cual de los 3 alumnos tiene el mejor promedio. 
		if(alumnos[i].avg>mayor){
			mayor=alumnos[i].avg;
			position = i;
		}
	}
	//imprimiendo datos del mejor alumno
	
	cout<<"El mejor alumno es "<<alumnos[position].name<<" con "<<alumnos[position].age<<" anios de edad y con una nota promedio de "<<alumnos[position].avg;
	

	
	getch();
	return 0;	
	
}
