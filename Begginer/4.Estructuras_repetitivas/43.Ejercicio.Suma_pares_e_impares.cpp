/* 12.Escriba un programa que calcule el resultado de la siguiente expresión 
 1-2+3-4+5-6...n. */
 
 
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int number,pair,pairSum=0,totalSum=0,oddSum=0;
	cout<<"Escriba su numero: ";cin>>number;
	
	for(int i=1;i<=number;i++){
		if(i%2==0){
			pair=-i; //ponemos el numero incremento en negativo, ya que los pares se restan
			pairSum+=pair;
		}else{
			oddSum+=i;
		}
	}
	totalSum=pairSum+oddSum;
	cout<<"La suma es: "<<totalSum<<endl;
	getch();
	return 0;
}
