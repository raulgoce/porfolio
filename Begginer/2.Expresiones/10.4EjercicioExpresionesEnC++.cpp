/* 4. Escrbe la siguiente expresión como expresión en C++: a+(b/(c-d)) */


#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,finalResult=0;
	
	cout<<"Introduzca el valor de a: ";  cin>>a;
	cout<<"Introduzca el valor de b: ";  cin>>b;
	cout<<"Introduzca el valor de c: ";  cin>>c;
	cout<<"Introduzca el valor de d: ";  cin>>d;
	
	finalResult=a+(b/(c-d));
	
	cout.precision(2); //funcion para acotar el numero de decimales que queremos mostrar
	cout<<"El resultado de a+(b/(c-d)) es: "<<finalResult;
	
	
	return 0;
}
