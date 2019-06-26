/* 4.Escriba un programa que tome cada 4 horas la temp exterior,
leyéndola durante un período de 24h. Debe leer 6 temperaturas.
Calcule la temp media del día, la más alta y la más baja. */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float temperature=0,big=0, small=9999999,totalSum=0,avgTemperature=0;
	 
	for(int i=0;i<24;i+=4){//se incrementa la variable i en 4, ya que es cada 4 horas
		cout<<"Ponga la temperatura de la hora "<<i<<" :"<<endl;
		cin>>temperature;
		totalSum+=temperature;
		if(temperature>big){
			big=temperature;
		}else if(temperature<small){
			small=temperature;
		}
	}
		avgTemperature=totalSum/6; //se divide entre seis ya que se pide 6 veces la temperatura durante un dia. 
		cout<<"La temperatura mas baja es "<<small<<", la temperatura mas alta es "<<big<<" y la temperatura promedio es "<<avgTemperature<<endl;
	getch();
	return 0;
}
