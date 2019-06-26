/* 5. Haga 2 estructuras, una llamada promedio que tendra los siguientes campos:
nota1, nota2 y nota3. Y otra llamada alumno que tendra los siguientes campos:
nombre, sexo, edad. Haga que la estructura promedio este anidada en la estructura alumno,
luego pida todos los datos para un alumno, calcule su promedio y por ultimo imprima las notas promedio. */


#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[30];
	char sexo[30];
	int edad;
	struct Promedio nota_promedio;
}alumnos[100];


int main(){
	int n=0, mejorPromedio=0, pos;
	cout<<"Por favor, escriba el numero de alumnos que quiere introducir: "; cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Por favor, indique el nombre del alumno: ";cin.getline(alumnos[i].nombre,30,'\n');
		cout<<i+1<<". Por favor, indique el sexo del alumno: ";cin.getline(alumnos[i].sexo,30,'\n');
		cout<<i+1<<". Por favor, indique la edad del alumno: ";cin>>alumnos[i].edad;
		cout<<i+1<<". Por favor, indique la primera nota del alumno: ";cin>>alumnos[i].nota_promedio.nota1;
		cout<<i+1<<". Por favor, indique la segunda nota del alumno: ";cin>>alumnos[i].nota_promedio.nota2;
		cout<<i+1<<". Por favor, indique latercera nota del alumno: ";cin>>alumnos[i].nota_promedio.nota3;
		cout<<"\n";
	}
	for(int i=0;i<n;i++){
		float notaPromedio= (alumnos[i].nota_promedio.nota1+alumnos[i].nota_promedio.nota2+alumnos[i].nota_promedio.nota3)/3;
		cout<<"La nota promedio del alumno "<<alumnos[i].nombre<<" es de "<< notaPromedio<<endl;
		if(notaPromedio>mejorPromedio){
			pos= i; 
		}
	}
	cout <<"El alumno con mejor promedio es: "<<alumnos[pos].nombre;
	getch();
	return 0;
}






