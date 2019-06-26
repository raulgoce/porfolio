//paso por parametros tipo array -> void functionTest(int array[], sizeOfArray)

#include <iostream>
#include <conio.h>

using namespace std;

void square(int vector[], int); //calcular el cuadrado de los numeros del array
void show(int vector[], int);

int main(){
	const int TAM = 5;
	int vector[TAM]={1,2,3,4,5};
	
	square(vector,TAM);
	show(vector,TAM);
	
	
	getch();
	return 0;
}

void square(int vector[], int TAM){
	for(int i=0; i<TAM; i++){
		vector[i] *= vector[i];
	}
}
void show(int vector[],int TAM){
	for(int i=0; i<TAM; i++){
		cout<<"|"<<vector[i]<<"|"<<endl;
	}
}


