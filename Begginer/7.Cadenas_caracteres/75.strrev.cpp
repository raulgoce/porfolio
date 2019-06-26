//invertir una cadena - funcion strrev()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char cad1[20]="Raul Gonzalez";
	
	strrev(cad1);
	
	cout<<cad1;
	
	getch();
	return 0;
}
