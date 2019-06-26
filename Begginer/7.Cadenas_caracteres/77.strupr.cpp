//Pasar una palabra a mayuscula - funcion strupr()


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[20]="alejandro";
	//funcion para pasar una palabra a mayuscula
	strupr(word);
	
	cout<<word;
	
	
	getch();
	return 0;
}
