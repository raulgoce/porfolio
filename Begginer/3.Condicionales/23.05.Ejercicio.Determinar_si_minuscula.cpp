/* 5.Escriba un programa que lea de la entrada un 
car�cter e indique en la salida si el car�cter es una
vocal min�scula o no. */


#include <iostream>

using namespace std;

int main(){
	char letter;
	
	cout<<"Introduzca una vocal: ";
	cin>>letter;
	
	//en el caso de un char hay que ponerlo entrecomillado simple
	switch(letter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minusucla."<<endl; break;
		default: cout<<"Es una vocal mayuscula."<<endl; break;
	}
	
	//otra manera con if
	cout<<"Se ejecuta el if"<<endl;
	if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
		cout<<"Es una vocal minusucla.";
	}else{
		cout<<"Es una vocal mayuscula.";
	}
	
	return 0;
}
