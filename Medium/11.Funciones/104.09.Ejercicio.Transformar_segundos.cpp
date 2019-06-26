/* 9.Escriba una funcion nombrada tiempo() que tenga un parametro en 
numero entero llamado totalSeg y tres parametros de referencia enteros
nombrados horas, min y seg. La funcion es convertir el numero de segundos
transmitidos en un numero equivalente de horas, min y seg.*/


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
void tiempo(int, int&, int&, int&);

int main(){
	int totalSeg, horas,minutos, segundos;
	
	cout<<"Escriba la cantidad de segundos que quiera convertir: "; cin>>totalSeg;
	
	tiempo(totalSeg,horas,minutos, segundos);
	
	cout<<"Resultado de los segundos transformados: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<minutos<<endl;
	cout<<"Segundos: "<<segundos<<endl;

	getch();
	return 0;
}


//definicion de funcion
void tiempo(int totalSeg, int& horas, int& minutos,int& segundos){
	horas=totalSeg/3600; //una hora tiene 3600 segundos, como el data es en segundos y no minutos, se hace la conversion
	totalSeg %= 3600;
	minutos = totalSeg/60;
	segundos = totalSeg%60;
	
	
}
