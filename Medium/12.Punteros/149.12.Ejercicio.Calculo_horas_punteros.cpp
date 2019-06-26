/* 12. Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa.
La estructura debe tener tres campos; horas, minutos, segundos. Escriba un programa que 
dado 3 etapas calcule el tiempo total empleado en correr todas las etapas. */



#include <iostream>
#include <conio.h>

using namespace std;

struct etapas{
	int horas;
	int minutos;
	int segundos;
}etapa[3],*puntero_etapa=etapa;

void AskData();
void GetTotalTime(etapas *);


int main(){
	AskData();
	GetTotalTime(puntero_etapa);
	getch();
	return 0;
}

//funcion para pedir datos al usuario del alumno
void AskData(){
	cout<<"Indique los datos de cada etapa: \n";
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<i+1<<". Indique las horas: ";cin>>(puntero_etapa+i)->horas;
		cout<<i+1<<". Indique los minutos: ";cin>>(puntero_etapa+i)->minutos;
		cout<<i+1<<". Indique los segundos: ";cin>>(puntero_etapa+i)->segundos;
		cout<<"\n";
	}
}

//funcion para comprobar el mejor promedio
void GetTotalTime(etapas *puntero_etapa){
	int contH=0,contM=0,contS=0;
	for(int i=0;i<3;i++){
		contH+=(puntero_etapa+i)->horas;
		contM+=(puntero_etapa+i)->minutos;
		contS+=(puntero_etapa+i)->segundos;
		if(contM>=60){
			contM-=60;
			contH++;
		}
		if(contS>=60){
			contS-=60;
			contM++;
		}
	}
	cout<<"El tiempo empleado por el ciclista es: \n";
	cout<<"Horas: "<<contH<<endl;
	cout<<"Minutos: "<<contM<<endl;
	cout<<"Segundos: "<<contS<<endl;
}
