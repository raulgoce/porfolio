/* 4.Defina un array y lo muestre en orden inverso. */


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int myArray[5]={1,2,3,4,5};
	
	for(int i=4; i>=0; i--){
		cout<<myArray[i]<<endl;
	}
	
	getch();
	return 0;
}
