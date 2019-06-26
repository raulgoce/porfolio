//longitud de una cadena de caracteres- Funcion strlen()


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[] = "hello world";
	int size = 0;
	
	//funcion para mirar la longitud de la cadena de caracteres
	size = strlen(word);
	cout<<size;
	
	
	getch();
	return 0;
}
