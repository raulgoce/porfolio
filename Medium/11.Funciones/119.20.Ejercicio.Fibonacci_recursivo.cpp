/* 20.Realice una funcion recursiva para la serie de fibonacci.
Nota: La serie de Fibonaci esta formada por la secuencia de numeros:
0,1,1,2,3,4,5,13,21,34,...

fibonacci(n)= n               				,si n<2
			  fibonacci(n-1)+fibonacci(n-2) , si >=2 
*/


#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci(int);

//main
int main(){
	int nElements;
	do{
		cout<<"Escriba el numero de elementos: ";
		cin>>nElements;
	}while(nElements<=0); //comprobamos que no sea negativo
	
	for(int i=0; i<nElements; i++){
		cout<<fibonacci(i)<<" , ";
	}
	getch();
	return 0;
}

//Funcion recursiva

int fibonacci(int n){

	if(n<2){ //caso base
		return n;
	}else{ //caso general
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
