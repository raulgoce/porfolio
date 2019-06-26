/* 5.Realice un programa para saber si una palabra es palindroma. */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char word[20];
	char wordInv[20]; 
	
	cout<<"Escriba su palabra: "; gets(word); //ya que es solo una palabra podemos usar gets
	
	strcpy(wordInv,word); //primero va la variable donde queremos almacenar
	strrev(wordInv);
	if(strcmp(word,wordInv)==0){
		cout<<"Esta palabra es un palindromo.";
	}else{
		cout<<"Esta palabra no es un palindromo.";
	}
	
	getch();
	return 0;
}
