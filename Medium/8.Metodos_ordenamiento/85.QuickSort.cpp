//Ordenacion QuickSort

//se divide el array en dos y un pivote central, este pivote tendrá a la izquierda los menores que ese y a la derecha los mayores.
//ordenará cada parte recursivamente. Una vez haya acabado, se vuelve hacer la division con la parte que tenga menos elementos. 
#include <iostream>
#include <conio.h>

using namespace std;

void Change(float &x, float &y){
	float aux;
	aux = x;
	x   = y;
	y   = aux;
}


void QuickSort(float array[],int first, int last){
	int i, j, center;
	float pivot;
	
	center = (first+last)/2; //posicion central del array
	pivot = array[center];
	i = first;
	j = last;
	
	do{
		while(array[i]<pivot) i++;
		while(array[j]>pivot) j--;
		if(i<=j){
			Change(array[i],array[j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(first<j){
		QuickSort(array,first,j); //ordenamos la sublista izquierda	
	}
	if(i<last){
		QuickSort(array,i,last); //ordenamos la sublista derecha
	}
}


int main(){
	float array[] = {4,7,1,8,3,17,5,9,3};
	
	QuickSort(array,0,8);
	cout<<"Nuestro array ordenado:"<<endl;
	for(int i=0;i<9;i++){
		cout<<array[i]<<" | ";
	}
	getch();
	return 0;
}
