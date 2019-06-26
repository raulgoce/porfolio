//Paso de parametros por referencia


#include <iostream>
#include <conio.h>

using namespace std;
void valNumber(int&, int&);

int main(){
	int num1, num2;
	cout<<"Introduzca dos numeros: ";cin>>num1>>num2;
	
	valNumber(num1, num2);
	getch();
	return 0;
}

void valNumber(int& xnum, int& ynum){
	cout<<"El valor del primero numero es: "<<xnum<<endl;
}
