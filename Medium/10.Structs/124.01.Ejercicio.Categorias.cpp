/* 1. Hacer una estructura llamada corredor, en la cual se tendrán los 
siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un solo corredor y asignarle
una categoria de competicion:
- Juvenil <=18 años
- Senior <=40 años
- Veterano >40 años
Posteriormente imprimir todos los datos del corredor incluida su categoria. */


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
	char name[20];
	int age;
	char gender[20];
	char club[20];
}c1;

int main(){
	char category[20];

		cout<<"Escriba su nombre: "; cin.getline(c1.name,20,'\n');
		cout<<"Escriba su edad: "; cin>>c1.age;
		fflush(stdin); //vaciar el buffer
		cout<<"Escriba su sexo: "; cin.getline(c1.gender,20,'\n');
		cout<<"Escriba su club: "; cin.getline(c1.club,20,'\n');
		cout<<"\n";
	
	//imprimir datos
	
	if(c1.age<=18){
		strcpy(category,"Juvenil");
	}else if((c1.age>18)&&(c1.age<=40)){
		strcpy(category,"Senior");
	}else{
		strcpy(category,"Veterano");
	}
	
	cout<<"\nLos datos del corredor "<<c1.name<<" son: "<<endl;
	cout<<"Edad: "<<c1.age<<endl;
	cout<<"Sexo: "<<c1.gender<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<category<<endl;	
	
	
	getch();
	return 0;	
	
}
