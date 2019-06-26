/* 10.  Escriba una funcion nombrada calc_años() que tenga
un param enteor que represente el numero total de dias desde 
la fecha 1/1/2000 y params de referencia nombrados año,
mes y dia. La funcion es calcular el año, mes y dia
actual pra el numero dado de dias que se le transmitan. */

#include <iostream>
#include <conio.h>

using namespace std;

void calc_anos(int, int&,int&,int&);


int main(){
	int totalDays, year, month, day;
	
	cout<<"Escriba el numero total de dias: "; cin>>totalDays;
	
	calc_anos(totalDays, year,month,day);
	
	cout<<"La fecha actual es: "<<day+1<<"|"<<month+1<<"|"<<year+2000<<endl;
	
	getch();
	return 0;
}

void calc_anos(int totalDays, int& year, int& month, int& day){
	year=totalDays/365;
	totalDays%=365;
	month=totalDays/30;
	totalDays%=30;
	day%=totalDays;
}
