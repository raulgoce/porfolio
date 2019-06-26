/* Recursividad , funcion que se llama a ella misma

factorial de un numero  3! = 3*2*1

	factorial(n) =  1						 , si n=0
					n* factorial(n-1)        , si n>0 
*/


#include <iostream>
#include <conio.h>

using namespace std;

void AskData();
int factorial(int);
int n;
//main
int main(){
	AskData();
	cout<<"El factorial de "<<n<<" es: "<<factorial(n);
	getch();
	return 0;
}

//Estructura
void AskData(){
	cout<<"Escriba un numero: ";cin>>n;
}
int factorial(int n){
	if(n==0){ //caso base
		n = 1;
	}else{    //caso general
		n=n*factorial(n-1); //va entrando con el nuevo valor, sería ( n= 3*factorial(3-1)-->!=0 then->(n=2*factorial(2-1)...
	}
	return n;
}
