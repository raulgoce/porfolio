/* 9.Realice un programa que calcule el valor que toma la siguiente función 
para valores dados de x e y.

f(x,y)=(raíz cuadrada de x)/(y elevado a 2)-1
*/

#include <iostream>
#include <math.h>//libreria para funciones matematicas y trigonometricas

using namespace std;

int main(){
	
	float x, y, total;
	cout<<"Introduzca el valor de x: ";  	   cin>>x;
	cout<<"Introduzca el valor de y: "; 	   cin>>y;
	
	total=(sqrt(x))/(pow(y,2)-1);//sacamos la raiz cuadrada de X con sqrt y a posterior elevamos al Y
	
	cout<<"El resultado de la funcion es: "<<total<<endl;
	
	return 0;
}
