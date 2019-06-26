/* 6. Defina una estructura que indique el tiempo empleado por un 
ciclista en una etapa. La estructura debe tener tres campos: horas, minutos, segundos. 
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las 
etapas. */


#include <iostream>
#include <conio.h>

using namespace std;

struct Etapas{
	int horas;
	int minutos;
	int segundos;
}et[100];


int main(){

	int n,horasTotales=0, minutosTotales=0,segundosTotales=0;
	cout<<"Por favor, escriba el numero de etapas: "; cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Por favor, indique cuantas horas ha tardado en recorrer la etapa "<<i+1<<": ";cin>>et[i].horas;
		cout<<i+1<<". Por favor, indique cuantos minutos ha tardado en recorrer la etapa "<<i+1<<": ";cin>>et[i].minutos;
		cout<<i+1<<". Por favor, indique cuantos segundos ha tardado en recorrer la etapa "<<i+1<<": ";cin>>et[i].segundos;
		cout<<"\n";
		horasTotales+=et[i].horas;
		minutosTotales+=et[i].minutos;
		if(minutosTotales>=60){
			minutosTotales -= 60;
			horasTotales++;
		}
		segundosTotales+=et[i].segundos;
		if(segundosTotales>=60){
			segundosTotales -= 60;
			minutosTotales++;
		}
	}

	cout<<"El tiempo total empleado en toda la carrera es: \n";
	cout<<"Horas: "<<horasTotales<<endl;
	cout<<"Minutos: "<<minutosTotales<<endl;
	cout<<"Segundos: "<<segundosTotales<<endl;
	
	getch();
	return 0;
}






