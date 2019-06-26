//Estructuras anidadas, estructuras dentro de otras 


#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado; //struct info_direccion hace de tipo de dato y le asignamos un valor 
	double salario;
}empleados[2];

int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin); //funcion para vaciar el buffer y permitir añadir nuevos datos. 
		cout<<"Escriba su nombre: "; cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Escriba su direccion: "; cin.getline(empleados[i].dir_empleado.direccion,20,'\n');
		cout<<"Escriba su ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Escriba su provincia: "; cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout<<"Escriba su salario: "; cin>>empleados[i].salario;
		cout<<"\n";
	}
	
	//imprimir datos
	
	for(int i=0;i<2;i++){
		cout<<"\nLos datos de "<<empleados[i].nombre<<" son: "<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Cireccion: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		
		
	}
	
	getch();
	return 0;	
	
}
