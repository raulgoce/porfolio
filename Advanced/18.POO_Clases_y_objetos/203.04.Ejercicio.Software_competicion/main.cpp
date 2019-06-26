/* 4. Cree un programa para una competicion de atletismo, el programa debe 
gestionar una serie de atletas caracterizados por su numero de atleta, 
nombre y tiempo de carrera, al final el programa debe mostrar los datos del 
atleta ganador. */


#include <iostream>
#include <string.h>
#include "Atleta.h"
using namespace std;

int main(int argc, char** argv) {
	Atleta * atletas;
	int n,numeroAtleta,indiceAtleta;
	string nombre;
	float tiempoCarrera;
	
	cout<<"Escriba el numero de atletas a competir: ";cin>>n;
	
	atletas = new Atleta[n];
	for(int i=0;i<n;i++){
		
		cout<<"\tEscriba los Atributos del Atleta\n";
		cout<<"Escriba el numero de atleta: ";cin>>numeroAtleta;
		fflush(stdin);
		cout<<"Escriba el nombre del atleta: "; getline(cin, nombre);
		cout<<"Escriba el tiempo del atleta en la carrera: "; cin>>tiempoCarrera;
		atletas[i] = Atleta(numeroAtleta, nombre, tiempoCarrera);
	}
	
	indiceAtleta = Atleta::indiceGanador(atletas,n);
	
	cout<<"El atleta ganador de la carrera es: "<<endl;
	(atletas+indiceAtleta)->mostrarDatos();
	
	return 0;
}
