/* 6.Escriba un programa que lea de la entrada est�ndar un car�cter
e indique en la salida est�ndar si el car�cter es una vocal min�scula,
es una vocal may�scula o no es una vocal. */



#include <iostream>

using namespace std;

int main(){
	char letter;
	
	cout<<"Introduzca una vocal: ";
	cin>>letter;
	
	switch(letter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minusucla."<<endl; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"Es una vocal mayusucula."<<endl; break;
		deafult: cout<<"Esto no es una vocal."<<endl;break;
	}
	
	//otra manera con if
	cout<<"Se ejecuta el if"<<endl;
	if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
		cout<<"Es una vocal minusucla.";
	}else if(letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
		cout<<"Es una vocal mayuscula.";
	}else{
		cout<<"Esto no es una vocal.";
	}
	
	return 0;
}
