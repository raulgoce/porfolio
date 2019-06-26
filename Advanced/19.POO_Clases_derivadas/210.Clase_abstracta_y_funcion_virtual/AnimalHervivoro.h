#include <iostream>
#include <string.h>
#include "Animal.h"

using namespace std;

class AnimalHervivoro: public Animal{
	public:
		void alimentarse(){
			cout<<"El animal hervivoro se alimenta de plantas. "<<endl;
		}
};
