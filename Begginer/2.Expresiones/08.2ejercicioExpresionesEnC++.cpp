/* 2. Escribe la siguiente expresión matemática como expresión en C++: (a+b)/(c+d) */


#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,finalResult=0;
	
	cout<<"Introduzca el primer valor: ";  cin>>a;
	cout<<"Introduzca el segundo valor: "; cin>>b;
	cout<<"Introduzca el tercer valor: ";  cin>>c;
	cout<<"Introduzca el cuarto valor: ";  cin>>d;
	
	finalResult=(a+b)/(c+d);
	
	cout.precision(2); //funcion para acotar el numero de decimales que queremos mostrar
	cout<<"El resultado de (a+b)/(c+d) es: "<<finalResult;
	
	
	return 0;
}
