/* 3.Pida al usuario que introduzca 2 cadenas e indique si ambas son iguales, de no serlo,
indique cual es mayor. */


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[20], secondWord[20]; 
	
	cout<<"Introduzca la primera frase: "; cin.getline(word,20,'\n');
	cout<<"Introduzca la segunda frase: "; cin.getline(secondWord,20,'\n');
	
	if(strcmp(word,secondWord)==0){
		cout<<"Las dos lineas de caracteres son iguales";
	}else if(strcmp(word,secondWord)>0){
		cout<<word<<" es mayor alfabeticamente.";
	}else{
		cout<<word<<" es menor alfabeticamente.";
	}
	
	
	getch();
	return 0;
}
