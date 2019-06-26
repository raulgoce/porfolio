//Busqueda Binaria

//para la busqueda binaria el array tiene que estar ordenada
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int array[] = {1,2,3,4,5};
	int inferior,superior,middle, data;
	char flag = 'F';
	
	data=4;
	
	//busqueda binaria
	inferior=0;
	superior=5; //longitud del array
	
	while(inferior<=superior){
		middle=(inferior+superior)/2;
		if(array[middle] == data){
			flag='T';
			break;
		}
		if(array[middle]>data){
			superior=middle;
			middle=(inferior+superior)/2;
		}
		if(array[middle]<data){
			inferior=middle;
			middle=(inferior+superior)/2;
		}
	}
	
	if(flag=='F'){
		cout<<"El numero que busca no esta en el array."<<endl;
	}else if(flag=='T'){
		cout<<"El numero que busca ha sido encontrado en la posicion del array: "<<middle<<endl;
	}
	
	
	
	getch();
	return 0;
}
