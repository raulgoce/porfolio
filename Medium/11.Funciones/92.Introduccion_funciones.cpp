//ejemplo para encontrar el mayor de 2 numeros

#include <iostream>
#include <conio.h>

using namespace std;

//prototipo de funcion

int FindMax(int x, int y);



int main(){
	int n1,n2,bigger;
	cout<<"Escriba dos numeros: "; cin>>n1>>n2;
	
	bigger=FindMax(n1,n2);
	cout<<"El mayor de los dos numeros es: "<<bigger<<endl;
	getch();
	return 0;
}

//definicion de funcion
int FindMax(int x, int y){
	int numMax;
	
	if(x>y){
		numMax=x;
	}else{
		numMax=y;
	}
	return numMax;
}
