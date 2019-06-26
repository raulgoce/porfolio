/* 1.Defina una clase DiaAno con los atributos mes y dia, los metodos
igual() y visualizar(). El mes se registra como un valor entero(1->enero,2->febrtero...)*/

#include <iostream>
#include "DiaAnio.h"

using namespace std;

int main(int argc, char** argv) {
	DiaAnio* hoy;
	DiaAnio* cumpleanios;
	int d, m;
	cout<<"Introduzca la fecha de hoy, dia: ";cin>>d;
	cout<<"Introduzca el numero de mes: ";cin>>m;
	hoy = new DiaAnio(d, m);
	cout<<"Introduzca su cumpleanios, dia: "; cin>>d;
	cout<<"Introduzca su mes: ";cin>>m;
	cumpleanios= new DiaAnio(d, m);
	
	//mostramos las fechas
	hoy->visualizar();
	cout<<endl;
	cumpleanios->visualizar();	
	
	if(hoy->igual(*cumpleanios)){
		cout<<"\nFeliz cumpleanios!!"<<endl;
	}else{
		cout<<"\n Que tenga un buen dia."<<endl;
	}
	return 0;
}
