#include <iostream>
#include "Triangulo.h"
using namespace std;


int main(int argc, char** argv) {
	Triangulo*t1=new Triangulo(3,4,5,6);
	
	cout<<"Numero de lados: "<<t1->getLados()<<endl;
	cout<<"Area: "<<t1->areaTriangulo()<<endl;
	
	return 0;
}
