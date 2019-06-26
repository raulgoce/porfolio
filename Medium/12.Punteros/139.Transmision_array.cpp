//Transmision de arrays


#include <iostream>
#include <conio.h>

using namespace std;
//Prototipo
int findMax(int *, int); 

int main(){
	const int nElements = 5;
	int numbers[nElements]={3,5,2,8,1};
	
	cout<<"El mayor elemento es: "<<findMax(numbers, nElements);
	
	getch();
	return 0;
}

//Definicion

int findMax(int *numbers, int nElements){
	int max=0;
	
	for(int i=0; i<nElements;i++){
		if(*(numbers+i)>max){
			max=*(numbers+i);
		}
	}
	return max;
	
}
