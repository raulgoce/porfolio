/* 12.Realice una funcion que tome como params un array y su tamaño y diga 
si el array esta ordenado crecientemente. Compruebe que para todas las 
posiciones del array salvo para la 0, el elemento del array es mayor o igual al
elemento que le precede. */

#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
void CheckArray(int array[], int);

int array[100], size;

int main(){

	AskData();
	CheckArray(array,size);
	
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de elementos que tendra el array: "; cin>>size;

	for(int i=0; i<size; i++){
		cout<<i+1<<". Escriba un numero: "; cin>>array[i];
	}
}

void CheckArray(int array[], int size){
	char flag='F';
	int i=0;

	while((flag=='F')&&(i<size-1)){ //comprobamos hasta el tamaño ultimo
		if(array[i]>array[i+1]){
			flag='V';
		}
		i++;
	}
	if(flag=='F'){
		cout<<"El array esta ordenado";
	}else{
		cout<<"El array no esta ordenado";
	}

}
