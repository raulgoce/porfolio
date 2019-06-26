/* 21.Escruba una funcion llamada escribeNumeros(int ini, int fin) que
devuelva los numeros del inicio al fin. Escriba una version que escriba los numeros en
orden ascendente. 

escribeNumeros(ini, fin) = ini              		 , si ini==fin
						   escribeNumeros(ini,fin-1) ,si fin>ini

*/


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de funcion
int escribeNumeros(int,int);

//main
int main(){
	int ini, fin;
	do{
		cout<<"Escriba un inicio: ";cin>>ini;
		cout<<"Escriba un final: "; cin>>fin;
	}while(ini>fin);
	
	for(int i=ini;i<fin;i++){
		cout<<escribeNumeros(i,fin)<<"|";
	}
	
	getch();
	return 0;
}

//Funcion recursiva

int escribeNumeros(int ini, int fin){
	if(ini==fin){
		return ini;
	}else{
		return escribeNumeros(ini,fin-1);
	}
}

