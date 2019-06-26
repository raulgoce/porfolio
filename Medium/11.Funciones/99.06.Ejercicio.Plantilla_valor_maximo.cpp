/* 6.Escriba una plantilla de funcion llamada maximo() que devuelva el valor 
maximo de tres argumentos que se transmitan a la funcion cuando sea llamada.
Suponga que los tres argumentos seran del mismo tipo.  */

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
template<class KINDD>
KINDD maximo(KINDD data1, KINDD data2, KINDD data3);

int main(){
	int data1=1,data2=5,data3=3;
	cout<<"El valor maximo es: "<<maximo(data1,data2,data3);
	getch();
	return 0;
}


//definicion de funcion
template<class KINDD>
KINDD maximo(KINDD data1, KINDD data2, KINDD data3){
	KINDD max;
	if((data1>=data2)&&(data1>=data3)){
		max=data1;
	}else if((data2>=data1)&&(data2>=data3)){
		max=data2;
	}else{
		max=data3;
	}
}
