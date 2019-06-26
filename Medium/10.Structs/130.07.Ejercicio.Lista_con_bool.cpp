/* 7. Escriba una estructua que sirva para representar a una persona. La estructura
debe contener dos campos: nobre y un valor de tipo logico que 
indica si la persona tiene algun tipo de descapacidad. Realice un programa que
dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otra que contenga las personas con discapacidad. */


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Persona{
	char nombre[30];
	bool discapacidad;
}personas[100],personasSinD[100],personasConD[100];
//personasSinD -> personas sin descapacidad / personasConD -> personas con discapacidad


int main(){

	int n,j=0,k=0; //contadores para los nuevos vectores
	cout<<"Por favor, escriba el numero de personas: "; cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Por favor, indique el nombre: ";cin.getline(personas[i].nombre,30,'\n');
		cout<<i+1<<". Por favor, indique si tiene alguna discapacidad (0->no/1->si): ";cin>>personas[i].discapacidad;
		cout<<"\n";
		if(personas[i].discapacidad==1){
			strcpy(personasConD[j].nombre,personas[i].nombre);
			j++;
		}else{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++;
		}
	}
	cout<<"Lista de personas con discapacidad: "<<endl;
	for(int i=0;i<j;i++){
		cout<<personasConD[i].nombre<<endl;
		
	}
	cout<<"\n";
	cout<<"Lista de personas sin discapacidad: "<<endl;
	for(int i=0;i<k;i++){
		cout<<personasSinD[i].nombre<<endl;
	}

	getch();
	return 0;
}






