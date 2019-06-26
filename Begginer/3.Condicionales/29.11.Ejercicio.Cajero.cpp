/* 11.Haga un programa que simule un cajero automático con un saldo inicial de 1000$. */

#include <iostream>

using namespace std;

int main(){
	float amount,actualAmount=1000;
	int option;
	
	cout<<"Bienvenido, que desea realizar? "<<endl;
	cout<<"1.Ingresar dinero en su cuenta "<<endl;
	cout<<"2.Retirar dinero "<<endl;
	cout<<"3.Salir"<<endl;	
	cout<<"Opcion: ";cin>>option;
	
	switch(option){
		case 1:
			cout<<"Inserte la cantidad que desee ingresar: "; cin>>amount;
			actualAmount+=amount;
			cout<<"Gracias por su transaccion, su saldo actual es de: "<<actualAmount;	
		break;
		case 2:
			cout<<"Inserte la cantidad que desee retirar: "; cin>>amount;
			if(amount>actualAmount){
					cout<<"No tiene saldo suficiente. ";
			}else{
				actualAmount-=amount;
				cout<<"Gracias por su transaccion, su saldo actual es de: "<<actualAmount;	
			}
			
		break;
		case 3:
			cout<<"Gracias por confiar en nosotros, su saldo actual es de: "<<actualAmount;	
		break;
	}
	
	
	
	

	
	return 0;
}
