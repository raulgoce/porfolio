//Cadena de Caracteres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	//estos dos metodos son lo mismo.
	char palabra[]="Alejandro";
	char palabra2[]={'A','l','e','j','a','n','d','r','o'};
	char name[30],name1[20];
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	//pedimos al user a que ponga su nombre.
	cout<<"Ponga su nombre: "; // si ponemos cin para guardar caracteres no guarda bien, podemos usar gets(), pero ignorara los espacios asignados
	gets(name);
	cout<<name<<endl;
	
	cout<<"Ponga su nombre de nuevo: "; //con el cin.getline guardara los caracteres que le digamos
	cin.getline(name1,20,'\n');
	
	cout<<name1<<endl;
	
	getch();
	return 0;
}
