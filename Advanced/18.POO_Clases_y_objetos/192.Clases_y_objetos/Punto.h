//declaracion de una clase

class Punto{
	//Atributos de la clase
	private://encapsulacion
		int x,y;
		//en los atributos protected, se puede acceder desde la misma clase o desde clases hijas
	//Metodos
	public:
		Punto(int _x, int _y){	//constructor y tiene el mismo nombre de la clase
			x = _x;
			y = _y;
		}
		Punto(){ //otro metodo constructor
			x = y = 0;
		}
		
		void setX(int valorX); //Establecemos el valor de X
		void setY(int valorY);
		int getX(); //metodo para obtener el valor de X
		int getY();
};
