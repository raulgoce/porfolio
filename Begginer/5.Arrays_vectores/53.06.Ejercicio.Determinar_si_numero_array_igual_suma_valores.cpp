/* 6. Escriba un programa que defina un array y calcule si existe algún
número cuyo valor equivale a la suma del resto de números. */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int myArray[5]={1,2,3,4,10};
	int sum=0,bigger=0;
	
	for(int i=0; i<5; i++){
		sum+=myArray[i];
		if(myArray[i]>bigger){
			bigger=myArray[i];
		}
	}
	if(bigger==sum-bigger){
		cout<<"El numero "<<bigger<<" equivale a la suma de los demas."<<endl;
	}else{
		cout<<"No existe ningun numero que sea igual a la suma de los demas.";
	}
	
	
	getch();
	return 0;
}
