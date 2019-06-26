#include <iostream>
#include "Poligono.h"
#include "Triangulo.h"
#include "Rectangulo.h"
using namespace std;
int main(int argc, char** argv) {
	Poligono* poligonos[2]; //creamos un objeto, pero on lo instanciamos, ya que no se puede en una clase abstracta instanciar!
	
	poligonos[0]=new Rectangulo(3,4); //si podemos instanciar clases hijas, pero no la abstracta
	poligonos[1]=new Triangulo(3,4,5);
	
	for(int i=0;i<2;i++){
		cout<<"Area: "<<poligonos[i]->area()<<endl;
		cout<<"Perimetro: "<<poligonos[i]->perimetro()<<endl;
	}
	return 0;
}
