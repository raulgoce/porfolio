#include <iostream>
#include <string.h>
using namespace std;

class Expediente{
	private:
		int numeroExp;
	public:
		Expediente(int numeroExp){
			this->numeroExp = numeroExp;
		}
		
		Expediente(){
		}
		
		~Expediente(){
		}
		
		int getNumExp(){
			return numeroExp;
		}
		
		
};
