/* 6.Haga una funcion para almacenar N numeros en un array dinamico,
posteriormente en otra funcion buscar un numero en particular. 
Puedes utilizar cualquier metodo de busqueda */

#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
void Find(int*,int);
int *elements,nElements=0;
char flag = 'F';

int main(){
	AskData();
	Find(elements, nElements);
	delete[] elements;
	
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de posiciones que tendra su array: "; cin>>nElements;
	
	elements= new int[nElements];
	
	for(int i=0; i<nElements;i++){
		cout<<"Escriba los datos: ";cin>>elements[i];
	}
}


void Find(int *elements,int nElements){
	int i=0,numberToFind=0;
	cout<<"Escriba el numero que quiere encontrar: ";cin>>numberToFind;
	while((flag=='F')&&(i<nElements)){
		if(*(elements+i)==numberToFind){
			flag='T';
		}
		i++;
	}
	
	if(flag=='F'){
		cout<<"El numero que busca no esta en el array."<<endl;
	}else if(flag=='T'){
		cout<<"El numero que busca ha sido encontrado en la posicion del array: "<<i-1<<endl;
	}
}

