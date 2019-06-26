//Paso de parametros de tipo estructura


#include <iostream>
#include <conio.h>

using namespace std;

struct Person{
	char name[30];
	int age;
}p1;

void AskData();
void ShowData(Person);


int main(){

	AskData();
	ShowData(p1);
	
	getch();
	return 0;
}

void AskData(){
	cout<<"Escriba su nombre: "; cin.getline(p1.name,30,'\n');
	cout<<"Escriba su edad: "; cin>>p1.age;
}

void ShowData(Person p){
	cout<<"\nNombre: "<<p.name<<endl;
	cout<<"Edad: "<<p.age<<endl;
}





