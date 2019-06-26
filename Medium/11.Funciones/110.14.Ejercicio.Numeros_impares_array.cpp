/* 14.Realice una funcion que tome como params un array y su tamaño y muestre
los elementos impares.  */

#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
void ShowArray(int array[],int);

int array[100],size;

int main(){

	AskData();
	ShowArray(array,size);

	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de elementos que tendra el array: "; cin>>size;

	for(int i=0; i<size; i++){
		cout<<i+1<<". Escriba un numero: "; cin>>array[i];
	}
}

void ShowArray(int array[],int size){
	int odd[100]; //creamos un nuevo array para almacenar los datos impares
	int j=0;
	for(int i=0; i<size; i++){
		if(array[i]%2 != 0){
			odd[j]=array[i]; 
			j++; //así mantenemos las posiciones correctas y tendremos posiciones vacias
		}
	}
	cout<<"Nuestro nuevo array con los elementos impares es: "<<endl;
	for(int i=0; i<j; i++){
		cout<<"|"<<odd[i]<<"|"<<endl;
	}
}
