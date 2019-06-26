//herencia multiple->cuando una clase tiene mas de un padre

#include <iostream>
#include <string.h>
#include "HidroAvion.h"
using namespace std;

int main(int argc, char** argv) {
	HidroAvion* ha = new HidroAvion("Veloz","HA99","ASD12");
	ha->mostrarDatos();
	
	delete ha;
	return 0;
}
