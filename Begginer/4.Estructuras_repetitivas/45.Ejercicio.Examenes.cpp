/* 14.En una clase de 5 alumnos hay 3 exámenes.Determine:
- Alumnos que aprobaron.
- Alumnos que aprobaron al menos uno.
- Alumnos que aprobaron sólo el último.
  */


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	float exam1,exam2,exam3;
	int allSuccess=0,atLeastOneSuccess=0,onlyLastOneSuccess=0;

	for(int i=1;i<=5;i++){
		cout<<i<<". Escriba la nota del primer examen: "; cin>>exam1;
		cout<<i<<". Escriba la nota del segundo examen: "; cin>>exam2;
		cout<<i<<". Escriba la nota del tercer examen: "; cin>>exam3;
		cout<<"\n";
		if((exam1>=5)&&(exam2>=5)&&(exam3>=5)){
			allSuccess++;
		}
		
		if((exam1>=5)||(exam2>=5)||(exam3>=5)){
			atLeastOneSuccess++;
		}
		
		if((exam1<5)&&(exam2<5)&&(exam3>=5)){
			onlyLastOneSuccess++;
		}
	}
		cout<<"Alumnos que aprobaron todos los examenes: "<<allSuccess<<endl;
		cout<<"Alumnos que aprobaron al menos un examen: "<<atLeastOneSuccess<<endl;
		cout<<"Alumnos que aprobaron solo el ultimo examen: "<<onlyLastOneSuccess<<endl;
	getch();
	return 0;
}
