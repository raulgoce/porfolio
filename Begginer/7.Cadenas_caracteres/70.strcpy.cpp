//copiar el contenido de una cadena a otra - funcion strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char name[] = "Alejandro";
	char name2[20];
	
	strcpy(name2, name);
	cout<<name2;
	
	getch();
	return 0;
}
