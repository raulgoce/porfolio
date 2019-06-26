/* 5.Desarrolle un programa que lea un array y determine el mayor elemento. */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int myArray[100],positions,bigger=0;
	
	cout<<"Escriba cuantas posiciones tendra su array: "; cin>>positions;
	
	for(int i=0; i<positions; i++){
		cout<<i+1<<". Escriba un numero: ";
		cin>>myArray[i];
		if(myArray[i]>bigger){
			bigger=myArray[i];
		}
	}
	cout<<"El numero mas grande de su array es: "<<bigger<<endl;
	
	getch();
	return 0;
}
