/* 8.Escriba un programa que lea de la entrada estándar los dos
catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <math.h>//libreria para funciones matematicas y trigonometricas

using namespace std;

int main(){
	
	float cateto1, cateto2, hipotenusa;
	cout<<"Introduzca el cateto 1: ";  	   cin>>cateto1;
	cout<<"Introduzca el cateto 2: "; 	   cin>>cateto2;
	
	hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2)); //funcion para sacar la raiz cuadrada->sqrt, para elevar un valor al cuadrado ->pow
	               //pow(variable que queremos elevar, número al que lo queremos elevar)
	
	cout.precision(2);
	
	cout<<"La hipotenusa de nuestro triangulo es: "<<hipotenusa<<endl;
	
	return 0;
}
