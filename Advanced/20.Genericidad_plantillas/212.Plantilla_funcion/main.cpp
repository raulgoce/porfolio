#include <iostream>
using namespace std;


//plantilla de funcion
template <class T,class T2>
//template <typename T,typename T2> //normalmente se usa class para clases y typename para funciones
T mayor(T dato1, T2 dato2){//tienen que ser del mismo tipo, sino hay que crear otra class o typename
	if(dato1>=dato2){
		return dato1;
	}
	else{
		return dato2;
	}
}


int main(int argc, char** argv) {
	cout<<"El mayor de 2 numeros enteros es: "<<mayor(19.5,9)<<endl;
	cout<<"El mayor de 2 numeros flotantes es: "<<mayor(4.5,6.7)<<endl;
	cout<<"El mayor de 2 caracteres es: "<<mayor('a','z')<<endl;
	
	return 0;
}
