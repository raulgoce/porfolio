/* 8.Escriba una funcion nombrada cambio() que tenga un parametro entero
y seis de referencia en numero entero nombrados cien, cincuenta,
veinte, diez, cinco y uno. LA funcion tiene que considerar el
valor entero transmitido como una cantidad en $ y convertir el valor
en el numero menor de billetes equivalentes.*/


#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la funcion
void cambio(int, int&, int&, int& ,int& ,int& ,int&);

int main(){
	int data, cien,cincuenta, veinte, diez, cinco, uno;
	
	cout<<"Escriba la cantidad en dolares: "; cin>>data;
	
	cambio(data,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cantidad de billetes a entregar como cambio: "<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;

	getch();
	return 0;
}


//definicion de funcion
void cambio(int data, int& cien, int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien=data/100;
	data %= 100;
	cincuenta = data/50;
	data %= 50;
	veinte=data/20;
	data %= 20;
	diez = data/10;
	data %= 10;
	cinco=data/5;
	data %= 5;
	uno = data/1;
	data %= 1;
	
	
}
