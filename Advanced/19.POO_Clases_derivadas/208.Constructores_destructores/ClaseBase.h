#include <iostream>
using namespace std;

class ClaseBase{
	private:
		int numero;
	public:
		ClaseBase(int numero){//constructor
			this->numero= numero;
			cout<<"Constructor de la clase Base."<<endl; 
		}
		~ClaseBase(){
			cout<<"Destructor de la clase Base. "<<endl;
		}
};
