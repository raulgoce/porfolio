/* 4. Comprube si el numero introducido es positivo o negativo. */

#include <iostream>

using namespace std;

int main(){
	int n1;
	
	cout<<"Escriba un numero: "; cin>>n1;
	
	if(n1==0){
		cout<<"El numero introducido es 0."<<endl;
	}else if(n1>0){
		cout<<"El numero introducido es positivo."<<endl;
	}else{
		cout<<"El numero introducido es negativo."<<endl;
	}
	return 0;
}
