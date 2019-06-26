//Transmision de direcciones, intercambiar dos valores entre si

#include <iostream>
#include <conio.h>

using namespace std;
//Prototipo
void intercambio(float *, float *); 

int main(){
	float num1=20.4,num2=6.78;
	
	cout<<"Primer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
	
	intercambio(&num1, &num2);
	
	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"El nuevo valor del num1 "<<num1<<endl;
	cout<<"El nuevo valor de num2: "<<num2<<endl;
	
	getch();
	return 0;
}

//Definicion

void intercambio(float *dirN1, float *dirN2){
	float aux;
	//intercambiar los valores de las variables
	aux=*dirN1;
	*dirN1=*dirN2;
	*dirN2=aux;
	
}
