#include <iostream>
#include <string.h>
using namespace std;
template <class T>
class Materia{
	private:
		string nombre;
		int clave;
		T calificacion;
	public:
		Materia(string nombre, int clave, T calificacion)
		{
			this->nombre=nombre;
			this->clave=clave;
			this->calificacion=calificacion;
		}
		void mostrarDatos(){
			cout<<"El nombre de la materia es: "<<nombre<<endl;
			cout<<"La clave de la materia es: "<<clave<<endl;
			cout<<"La calificacion es: "<<calificacion<<endl;
		}
		void setCalificacion(T calificacion){
			this->calificacion=calificacion;
		}
		T getCalificacion(){
			return calificacion;
		}
};
