/* 2.Pida al usuario una cadena, almacenela en un char y copie su contenido hacia otro. */


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char word[20],word2[20];
	
	cout<<"Por favor, escriba su linea de caracteres: ";
	cin.getline(word,20,'\n');
	
	strcpy(word2, word);
	cout<<word2;
	
	getch();
	return 0;
}
