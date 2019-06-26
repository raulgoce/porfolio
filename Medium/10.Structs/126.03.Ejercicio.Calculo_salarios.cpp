/* 3.Realice un programna que lea un array de estructuras los datos 
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario. */


#include <iostream>
#include <conio.h>

using namespace std;

struct empleado{
	char name[20];
	int age;
	float salary;
}empleados[100];

int n=0;

int main(){
	int bigger=0,smaller=9999999, posm,posM;
	cout<<"Indique cuantos trabajadores quiere registrar: ";cin>>n;
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<i+1<<". Nombre: "; cin.getline(empleados[i].name,20,'\n');
		cout<<i+1<<". Edad: "; cin>>empleados[i].age;
		cout<<i+1<<". Salario: "; cin>>empleados[i].salary;
		cout<<"\n";
		
		if(empleados[i].salary>bigger){
			bigger=empleados[i].salary;
			posM=i;
		}
		
		if(empleados[i].salary<smaller){
			smaller=empleados[i].salary;
			posm=i;
		}
	}
	cout<<"El salario mas grande es de "<<empleados[posM].name<<" con "<<empleados[posM].age<<" anios con un salario de "<<empleados[posM].salary<<endl;
	cout<<"El salario mas pequeño es de "<<empleados[posm].name<<" con "<<empleados[posm].age<<" anios con un salario de "<<empleados[posm].salary;

	
	getch();
	return 0;	
	
}
