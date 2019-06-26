/* 18.Escriba una funcion llamada mayor() que devuelva la fecha mas reciente 
de cualquier par de fechas que se introduzcan. Por ejemplo. si se 
transmiten las fechas 10/09/2005 y 11/03/2015 a mayor(), sera
devuelta la segunda fecha. */


#include <iostream>
#include <conio.h>

using namespace std;

struct Fecha{
	int dia, mes, anio; 
}f1,f2;

//Prototipo
void AskData();
Fecha mayor(Fecha,Fecha);
void show(Fecha);

//main
int main(){
	AskData();
	Fecha x= mayor(f1,f2);
	show(x);
	getch();
	return 0;
}

//Estructura
void AskData(){
	
	cout<<"Escriba la primera fecha. "<<endl; 
	cout<<"Dia: "; cin>>f1.dia;
	cout<<"Mes: "; cin>>f1.mes;
	cout<<"Año: "; cin>>f1.anio;
	
	cout<<"\nEscriba la segunda fecha. "<<endl; 
	cout<<"Dia: "; cin>>f2.dia;
	cout<<"Mes: "; cin>>f2.mes;
	cout<<"Año: "; cin>>f2.anio;
	
}

Fecha mayor(Fecha f1, Fecha f2){
	Fecha mayorFecha;
	if((f1.anio>=f2.anio)&&(f1.mes>=f2.mes)&&(f1.dia>=f2.dia)){
		mayorFecha=f1;
	}else{
		mayorFecha=f2;
	}
	return mayorFecha;
}
void show(Fecha x){
	cout<<"La fecha mas proxima es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}
