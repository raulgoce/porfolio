//Ordenamiento por seleccion

//ordenamiento que mira el más pequeño y lo pone en el primero. 
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numbers[5] = {3,2,1,5,4};
	int i,j,minNumber,aux;
	
	for(i=0;i<5;i++){
		minNumber = i;
		for(j=i+1;j<5;j++){
			if(numbers[j]<numbers[minNumber]){
				minNumber=j;
			}
		}
		aux = numbers[i];
		numbers[i] = numbers[minNumber];
		numbers[minNumber] = aux;
	}
	
	cout<<"Imprimimos el array"<<endl;
	for(i=0;i<5;i++){
		cout<<"["<<i<<"]:"<< numbers[i]<<endl;
	}
	
	getch();
	return 0;
}


