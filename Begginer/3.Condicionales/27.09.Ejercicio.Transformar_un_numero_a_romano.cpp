/* 9.Cambie un número entero con el mismo valor pero en romano. 
	M=1000
	D=500
	C=100
	L=50
	X=10
	V=5	
	I=1
*/


#include <iostream>

using namespace std;

int main(){
	int number,units,tens,hundreds,thousand;
	
	cout<<"Introduzca un numero: "; cin>>number;
	
	//necesito que el numero introducido se vaya dividiendo para así poder sacar su valor en romano
	//para ello cojo el último valor y lo almaceno en su variable
	units=number%10; number /=10;
	tens=number%10; number/=10;	
	hundreds=number%10; number/=10;
	thousand=number%10; number/=10;
	
	//hay tres casos, 1 millar, 2 y 3. 
	switch(thousand){
		case 1: cout<<"M";break;
		case 2: cout<<"MM";break;
		case 3: cout<<"MMM";break;
	}
	//hay 9 casos
	switch(hundreds){
		case 1: cout<<"C";break; //100
		case 2: cout<<"CC";break; //200
		case 3: cout<<"CCC";break; //300
		case 4: cout<<"CD";break; //400-> 100-500
		case 5: cout<<"D";break; //500
		case 6: cout<<"DC";break; //600->500+100
		case 7: cout<<"DCC";break; //700
		case 8: cout<<"DCCC";break; //800
		case 9: cout<<"CM";break;//900 ->100-1000
	}
	//hay 9 casos
	switch(tens){
		case 1: cout<<"X";break; //10
		case 2: cout<<"XX";break; //20
		case 3: cout<<"XXX";break; //30
		case 4: cout<<"XL";break; // 40 -> 10-50
		case 5: cout<<"L";break; //50
		case 6: cout<<"LX";break; //60 ->50+10
		case 7: cout<<"LXX";break; //70
		case 8: cout<<"LXXX";break; //80
		case 9: cout<<"XC";break; //90->10-100
	}
		switch(units){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
	

	return 0;
}
