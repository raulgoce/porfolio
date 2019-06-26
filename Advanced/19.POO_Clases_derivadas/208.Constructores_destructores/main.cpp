#include <iostream>
#include "ClaseHija.h"
using namespace std;


int main(int argc, char** argv) {
	ClaseHija* obj1=new ClaseHija(5,10);
	cout<<endl;
	 
	delete obj1;
	return 0;
}
