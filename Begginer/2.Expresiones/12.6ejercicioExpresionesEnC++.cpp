/* 6.Escriba un programa que lea la nota final de cuatro alumnos y
calcule la nota final media de los cuatro alumnos. */

#include <iostream>

using namespace std;

int main(){
	
	float student1,student2,student3,student4;
	float avaregeResult=0;
	cout<<"Introduzca la nota final del primer alumno: ";  cin>>student1;
	cout<<"Introduzca la nota final del segundo alumno: "; cin>>student2;
	cout<<"Introduzca la nota final del tercer alumno: ";  cin>>student3;
	cout<<"Introduzca la nota final del cuarto alumno: ";  cin>>student4;
	
	avaregeResult=(student1+student2+student3+student4)/4;
	
	cout<<"El resultado medio es: "<<avaregeResult;
	
	return 0;
}
