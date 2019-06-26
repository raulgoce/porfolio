/* 4.Haga un arreglo de estructura llamada atleta para N atletas
que contenga los siguientes campos: Nombre, país, numero de medallas. Y
devuelva los datos del que ha ganado mas y menos.  */

#include <iostream>
#include <conio.h>

using namespace std;

struct atleta{
	char name[30];
	char country[30];
	int num_medals;
}atletas[100];


int main(){

	
	int n, less=999999,big=0,posM,posm;
	cout<<"Por favor, escriba el numero de atletas que quiere introducir: "; cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Por favor, indique el nombre del atleta: ";cin.getline(atletas[i].name,30,'\n');
		cout<<i+1<<". Por favor, indique el pais del atleta: ";cin.getline(atletas[i].country,30,'\n');
		cout<<i+1<<". Por favor, indique el numero de medallas del atleta: ";cin>>atletas[i].num_medals;
		if(atletas[i].num_medals>big){
			big = atletas[i].num_medals;
			posM = i;
		}
		if(atletas[i].num_medals<less){
			less = atletas[i].num_medals;
			posm = i;
		}
	}
		cout<<"El atleta con mas medallas es "<<atletas[posM].name<<" de "<<atletas[posM].country<<" con "<<atletas[posM].num_medals<<" numero de medallas. "<<endl;
		cout<<"El atleta con menos medallas es "<<atletas[posm].name<<" de "<<atletas[posm].country<<" con "<<atletas[posm].num_medals<<" numero de medallas. "<<endl;
	getch();
	return 0;
}



