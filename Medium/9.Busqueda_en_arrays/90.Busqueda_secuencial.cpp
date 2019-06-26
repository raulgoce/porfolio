//Busqueda Secuencial

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int array[] = {3,4,2,1,5};
	int i, data;
	char flag = 'F';
	
	//busqueda secuencial
	i=0;
	data=5; //numero que queremos buscar
	while((flag=='F')&&(i<5)){
		if(array[i]==data){
			flag='T';
			i++;
			break;
		}
		i++;
	}
	
	if(flag=='F'){
		cout<<"El numero que busca no esta en el array."<<endl;
	}else if(flag=='T'){
		cout<<"El numero que busca ha sido encontrado en la posicion del array: "<<i-1<<endl;
	}
	
	
	
	getch();
	return 0;
}
