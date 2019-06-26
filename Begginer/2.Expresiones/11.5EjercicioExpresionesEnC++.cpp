/* 4. Escrba un fragmento de programa que intercambie los valores de dos variables. */


#include <iostream>

using namespace std;

int main(){
	
	int a,b,aux;
	
	cout<<"Introduzca el valor de a: ";  cin>>a;
	cout<<"Introduzca el valor de b: ";  cin>>b;
	
	
	aux=a; //asignamos el valor de "a" a una variable auxiliar, ya que si no se sobreescribiria
	a=b; //asignamos el valor de "b" a "a" lo que reemplaza el valor de "a" 
	b=aux; //asignamos el valor de "aux" a "b" anteriormente almacenado
	
	cout<<"El resultado de a es: "<<a<<endl;
	cout<<"El resultado de b es: "<<b<<endl;
	
	return 0;
}
