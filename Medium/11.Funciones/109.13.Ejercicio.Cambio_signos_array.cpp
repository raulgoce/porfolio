/* 13.Realice una funcion que tome como params un array y su tamaño cambie 
el signo de los elementos del array.  */

#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
void ChangeSign(int array[],int);
void ShowArray(int array[],int);

int array[100],size;

int main(){

	AskData();
	ChangeSign(array,size);
	ShowArray(array, size);
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de elementos que tendra el array: "; cin>>size;

	for(int i=0; i<size; i++){
		cout<<i+1<<". Escriba un numero: "; cin>>array[i];
	}
}

void ChangeSign(int array[],int size){
	for(int i=0; i<size; i++){
		array[i] *= -1;
	}

}

void ShowArray(int array[],int size){
	cout<<"Los datos del array nuevo son:"<<endl;
	for(int i=0; i<size; i++){
		cout<<"|"<<array[i]<<"|"<<endl;
	}
}
