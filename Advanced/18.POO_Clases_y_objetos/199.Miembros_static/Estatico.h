#include <iostream>
using namespace std;
class Estatico{
	//Atributos
	private:
		static int contador; //declaracion de un atributo estatico, todos los objetos tendran el valor para este atributo
		
	//metodos
	public: 
		Estatico(){
			contador++;
		}
		int getContador(){
			return contador;
		}
		static int sumar(int n1,int n2){//metodo de tipo static
			int suma= n1+n2;
			return suma;
		}
		
};
