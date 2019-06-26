
#include <iostream>
#include <conio.h> //libreria para que no se cierren los exe

using namespace std;

int main(){
	int i=1,foo=10;
	
	//condicional que mira que mientras la variable "i" sea menor o igual que 10, hará lo que le digamos. 
	while(i<=10){
		cout<<i<<endl;
		i++;
	}
	
	while(foo>=1){
		cout<<foo<<endl;
		foo--;
	}
	getch(); //funcion de conio
	return 0;
}
