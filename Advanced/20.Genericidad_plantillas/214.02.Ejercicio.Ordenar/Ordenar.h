//plasntilla de funcion


#include <iostream>
#include "Intercambio.h"
using namespace std;
template <typename T>
void ordenarAsc(T *array, int n){ 
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(array[j]>array[j+1]){
				intercambio(array[j],array[j+1]);
			}
		}		
	}
}
template <typename T>
void ordenarDesc(T *array, int n){ 
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(array[j]<array[j+1]){
				intercambio(array[j],array[j+1]);
			}
		}		
	}
}

