//implementacion de la clase DiaAnio

class DiaAnio{
	//Atributos
	private:
		int dia,mes;
	
	//metodos:
	public:
		DiaAnio(int _dia, int _mes){//constructor
			dia = _dia;
			mes = _mes;
		}
		bool igual(DiaAnio& d);
		void visualizar();
		
	
};
