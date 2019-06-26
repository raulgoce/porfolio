/* 9.Realice un programa que lea una cadena de caracters y muestre
cuantas ocurrencias de cada vocal existen. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	char frase[30];
	int vocal_a=0,vocal_e=0,vocal_o=0,vocal_u=0,vocal_i=0;

	cout<<"Escriba una frase: "; cin.getline(frase,30,'\n');

	for(int i=0; i<30; i++){
		switch(frase[i]){
			case 'a':
				vocal_a++;
			break;
			case 'e':
				vocal_e++;
			break;
			case 'o':
				vocal_o++;
			break;
			case 'i':
				vocal_i++;
			break;
			case 'u':
				vocal_u++;
			break;
		}
	}
	cout<<"La vocal 'a' ha sido encontrada "<<vocal_a<<" veces"<<endl;
	cout<<"La vocal 'e' ha sido encontrada "<<vocal_e<<" veces"<<endl;
	cout<<"La vocal 'i' ha sido encontrada "<<vocal_i<<" veces"<<endl;
	cout<<"La vocal 'o' ha sido encontrada "<<vocal_o<<" veces"<<endl;
	cout<<"La vocal 'u' ha sido encontrada "<<vocal_u<<" veces"<<endl;

	getch();
	return 0;
}
