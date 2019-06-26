/*2. Escribe un programa que lea de la entrada estándar el precio 
de un producto y muestre en la salida estándar el precio del producto
al aplicarle el IVA */

#include <iostream>

using namespace std;

int main(){
	
	//declaramos la variable en la que almacenaremos el input
	int number=0;
	//suponemos que el iva es de un 21%
	float iva=1.21;	
	//declaramos la variable donde irá el resultado final, declaramos un float ya que puede que el resultado sea decimal
	float finalResult=0;
	
	cout<<"Escriba el numero que quiera calcular su iva: ";
	cin>>number;
	
	finalResult=number*iva;
	
	cout<<"Precio del producto final con IVA: "<<finalResult<<endl;
	
	return 0;
}
