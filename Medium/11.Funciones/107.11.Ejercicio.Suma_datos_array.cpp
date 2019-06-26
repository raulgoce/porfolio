/* 11.Realice una funcion que tome como params un array
de numeros enteros y devuelva la suma de sus elementos totales. */

#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
int SumData(int array[], int size);

int array[100], size;

int main(){

	AskData();
	int result=SumData(array,size);
	
	cout<<"El resultado de la suma de los elementos es: "<<result;
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba el numero de elementos que tendra el array: "; cin>>size;

	for(int i=0; i<size; i++){
		cout<<i+1<<"Escriba un numero: "; cin>>array[i];
	}
}

int SumData(int array[], int size){
	int sum=0;

	for(int i=0;i<size; i++){
		sum +=array[i];
	}
	return sum;
}
