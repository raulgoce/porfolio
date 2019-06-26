/* 7.La calificación final de un estuidiante es el promedio de tres notas:
- la nota de prácticas que cuenta un 30%.
- la nota teórica que cuenta un 60%.
- la nota de participación que cuenta un 10%.

Escriba un programa que lea las tres notas y calcule su nota final. 
 */

#include <iostream>

using namespace std;

int main(){
	
	float practices,exam,participation,total=0;
	cout<<"Introduzca la nota de practicas: ";  	   cin>>practices;
	cout<<"Introduzca la nota del examen: "; 		   cin>>exam;
	cout<<"Introduzca la nota de la participacion: ";  cin>>participation;
	
	practices*=0.3;
	exam*=0.6;
	participation*=0.1;
	
	total=practices+exam+participation;
	
	cout<<"El resultado final es: "<<total;
	
	return 0;
}
