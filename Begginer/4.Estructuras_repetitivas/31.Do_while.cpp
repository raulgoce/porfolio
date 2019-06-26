#include <iostream>
#include <stdlib.h> //igual que la libreria conio, tiene funciones propias para cerrar nuestro exe

using namespace std;

int main(){
	int i=1,foo=10;
	
	do{
		cout<<i<<endl;
		i++; //aumenta el iterador de uno en uno
	}while(i<=10);
	
	do{
		cout<<foo<<endl;
		foo--; //decrementa el iterador de uno en uno
	}while(foo>=1);
	
	system("pause");
	return 0;
}
