#include <iostream>
#include <string.h>
#include "Atleta.h"
using namespace std;

float Atleta::getTiempoCarrera(){
	return tiempoCarrera;
}

void Atleta::mostrarDatos(){
	cout<<"Numero de Atleta: "<<numeroAtleta<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Tiempo de carrera: "<<tiempoCarrera<<endl;
}

int Atleta::indiceGanador(Atleta atletas[],int n){
	float tiempoCarrera;
	int pos=0;
	
	tiempoCarrera=atletas[0].getTiempoCarrera();
	for(int i=1;i<n;i++){
		if(atletas[i].getTiempoCarrera()<tiempoCarrera){
			tiempoCarrera=atletas[i].getTiempoCarrera();
			pos = i;
		}
	}
	return pos;
}
