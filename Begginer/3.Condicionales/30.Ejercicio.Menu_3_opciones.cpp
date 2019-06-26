/* 12.Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un número.
Caso 2: Numero par o impar.
Caso 3: Salir.
 */
 
 
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int option,num;
	float number, cubo;
	
	cout<<"\t.:MENU:."<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; cin>>option;
	
	switch(option){
		case 1:
			cout<<"Escriba su numero: "; cin>>number;
			cubo=pow(number,3); //conseguimos el cubo de un numero con la funcion pow
			cout<<"El cubo de su numero es: "<<cubo<<endl;
		break;
		case 2:
			cout<<"Escriba su numero: "; cin>>num; //se asigna un int ya que con los floats no se puede usar el operador de residuos. 
			if(num%2==0){
				cout<<"Su numero es par."<<endl;	
			}else{
				cout<<"Su numero no es par."<<endl;
			}
		break;
		case 3: break;
			
	}
	return 0;
}
