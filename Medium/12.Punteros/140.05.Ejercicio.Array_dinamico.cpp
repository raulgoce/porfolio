/* 5.Pida al usuario N numeros, almacenarlos en un array dinamico, posteriormente
ordene los numeros en orden ascendenete y mostrarlos en pantalla. */


#include <iostream>
#include <conio.h>

using namespace std;


//Prototipo

void AskData(); 
void SortArray(int*,int);
void ShowArray(int*,int);

int nElements, *element;


int main(){
	AskData();
	SortArray(element,nElements);
	ShowArray(element,nElements);
	
	delete[] element;
	
	getch();
	return 0;
}



//Definicion

void AskData(){
	//pedimos la cantidad de posiciones que tendra nuestro array
	cout<<"Escriba el numero de valores que tendra su array: "; cin>>nElements;
	//creamos nuestro array
	element =  new int[nElements];
	//ingresamos los datos
	for(int i=0;i<nElements; i++){
		cout<<"Ingrese un valor: ";cin>>element[i];
	}	
}


void SortArray(int *element, int nElements){
	int aux=0;
	//ordenando por el metodo burbuja
	for(int i=0;i<nElements;i++){
		for(int j=0;j<nElements-1;j++){
			if(*(element+j)>*(element+j+1)){
				aux= *(element+j);
				*(element+j)=*(element+j+1);
				*(element+j+1)=aux;
			}
		}
	}
}


void ShowArray(int *element, int nElements){
	cout<<"Mostrando array ordenado: "<<endl;
	for(int i=0; i<nElements;i++){
		cout<<*(element+i)<<endl;
	}
}
