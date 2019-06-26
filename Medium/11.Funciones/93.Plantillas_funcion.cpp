//Plantillas de funcion


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
template<class KINDD> //con la plantilla no hace falta una funcion por cada tipo de dato
void showAbsolute(KINDD number);


int main(){
	int num1=4;
	float num2=56.67;
	double num3=-123.45678;
	
	showAbsolute(num1);
	showAbsolute(num2);
	showAbsolute(num3);
	
	getch();
	return 0;
}


//definicion de funcion
template<class KINDD>
void showAbsolute(KINDD number){
	if(number<0){
		number *=-1;
	}
	
	cout<<"El valor absoluto del numero es: "<<number<<endl;
}

