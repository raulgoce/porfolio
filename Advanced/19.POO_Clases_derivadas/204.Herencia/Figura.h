#include <iostream>
using namespace std;

class Figura{
	private: 
		int nLados;
	public:
		Figura(int nLados){
			this->nLados= nLados;
		}
		
		int getLados(){
			return nLados;
		}
};
