//Puntoeros a Estructuras

#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona, *puntero_persona=&persona;

void AskData();
void ShowData(Persona *);

int  main(){
	AskData();
	ShowData(puntero_persona);
	
	getch();
	return 0;
}


void AskData(){
	cout<<"Escriba su nombre: "; cin.getline(puntero_persona->nombre,30,'\n');
	cout<<"Escriba su edad: ";cin>>puntero_persona->edad;
	
}
void ShowData(Persona *puntero_persona){
	cout<<"Su numbre es: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}

