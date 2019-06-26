/* 1.Haga un programa que pida al usuario una cadena de caracteres, luego
verifique la longitud de la cadena, si ésta supera 10 mostrarlo en pantalla. */


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[] = "";
	int size = 0;
	
	cout<<"Por favor, escriba su linea de caracteres: ";
	cin.getline(word,50,'\n');
	
	size=strlen(word);
	cout<<size;
	if(size>10){
		cout<<"Su linea de caracteres es mayor a 10.";
	}else{
		cout<<"Su linea de caracteres no es mayor a 10.";
	}
	
	getch();
	return 0;
}
