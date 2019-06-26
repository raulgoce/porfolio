/* Ordenamiento por metodo burbuja */

//para ordernar miramos si la posicion actual es mayor a la siguiente, si es mayor, se intercambian.
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int numbers[5]={3,1,4,2,5};
	int i,j,aux;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(numbers[j]>numbers[j+1]){
				aux= numbers[j];
				numbers[j]=numbers[j+1];
				numbers[j+1]=aux;
			}
			
		}	
		cout<<"El array quedaria tal que asi: ["<<i<<"]: "<<numbers[i]<<endl;
	}
	getch();
	return 0;
}
