/* 10.Escriba un programa que calcule las soluciones de una ecuación de segundo
grado de la forma ax^2+bx+c=0, teniendo en cuenta que:

x=(-b +- (raiz cuadrada de (b^2-4ac))/(2a)

*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float totalplus,totalneg,a,b,c;
	
	cout<<"Escriba el valor de a: "; cin>>a;
	cout<<"Escriba el valor de b: "; cin>>b;
	cout<<"Escriba el valor de c: "; cin>>c;
	
	totalplus=(-b + sqrt(pow(b,2)-4*a*c))/(2*a);
	totalneg=(-b - sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"El resultado 1 es: "<<totalplus<<endl;
	cout<<"El resultado 2 es: "<<totalneg<<endl;
	
	return 0;
}
