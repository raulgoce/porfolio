//ordenacion Shell o ordenacion por insercion con incrementos decrecientes

//para empezar se mira n/2, es decir, que el tamaño de nuestro array=n se divide entre 2 y son las posiciones que va a comprobar.
//con un condicional, se mira si es menor o igual, si lo es no pasa nada, de no ser así se intercambian. 
//mientras se pueda ir haciendo n/2, es decir, mientras siga desordenada, seguirá siendo n/2. 
#include <iostream>
#include <conio.h>

using namespace std;

void Change(float &x, float &y){
	float aux;
	
	aux=x;
	x=y;
	y=aux;
}

void OrdenacionShell(float array[],int n){ //n como numero de elementos dentro del array
	int jump, i, j, k; //i como indice recurrente, j para indice de la primera posicion, k como indice de la segunda que vamos a comprobar. 
	jump=n/2; //numero de posiciones que vamos a saltar.
	
	while(jump>0){
		for(i=jump;i<n;i++){
			j = i-jump;
			while(j>=0){ //para no hacer comprobaciones de más
				k = j+jump;
				if(array[j]<=array[k]){//par de elementos están ordenados
					j=-1;
				}else{ //par de elementos están desordenados
					Change(array[j],array[k]);
					j -= jump;
				}
			}
		}
		jump = jump/2;
	}	
}


int main(){
	float array[]={4,6,1,9,5,10,2,11,19,7};
	OrdenacionShell(array,10);
	
	cout<<"Nuestro array ordenado:"<<endl;
	for(int i=0;i<10;i++){
		cout<<array[i]<<" | ";
	}
	getch();
	return 0;
}
