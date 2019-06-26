#include <iostream>

using namespace std;

int main(){
	
	int number,x=5;
	
	cout<<"Escriba un numero: "; cin>>number;
	
	//condicional if para mirar si el numero introducido es igual a 5
	cout<<"Condicional de igualdad."<<endl;
	if(number==x){
		cout<<"El numero introducido es 5."<<endl;
	}else{
		cout<<"El numero introducido es diferente a 5."<<endl;
	}
	
	
	//condicional para mirar que el numero introducido es diferente a 5
	cout<<"Condicional de diferencia."<<endl;
	if(number!=x){
		cout<<"El numero introducido no es 5."<<endl;
	}else{
		cout<<"El numero introducido es 5."<<endl;
	}
	
	//condicional para mirar que el numero introducido es mayor a 5
	cout<<"Condicional de mayor que."<<endl;
	if(number>x){
		cout<<"El numero introducido es mayor a 5."<<endl;
	}else{
		cout<<"El numero introducido es menor a 5."<<endl;
	}
	
	
	//condicional para mirar que el numero introducido es menor a 5
	cout<<"Condicional de menor que."<<endl;
	if(number<x){
		cout<<"El numero introducido es menor a 5."<<endl;
	}else{
		cout<<"El numero introducido es mayor a 5."<<endl;
	}
	
	
	//condicional para mirar que el numero introducido es mayor o igual a 5
	cout<<"Condicional de mayor o igual a."<<endl;
	if(number>=x){
		cout<<"El numero introducido es mayor o igual a 5."<<endl;
	}else{
		cout<<"El numero introducido es menor a 5."<<endl;
	}
	
	
	//condicional para mirar que el numero introducido es menor o igual a 5
	cout<<"Condicional de menor o igual a."<<endl;
	if(number<=x){
		cout<<"El numero introducido es menor o igual a 5."<<endl;
	}else{
		cout<<"El numero introducido es menor a 5."<<endl;
	}	
	return 0;
}
