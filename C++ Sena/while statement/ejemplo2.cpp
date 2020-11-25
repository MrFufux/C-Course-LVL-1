//-----------------------------EJEMPLO DE WHILE LOOP--------------------------------------------------

//UN ESTUDIANTE RECIBE 5 CALIFICACIONES Y SE DEBE DETERMINAR EL PROMEDIO ALCANZADO POR EL.

#include<iostream>

using namespace std;

int main () {
	int contador_notas = 1;
	float nota, promedio = 0.0, acumulador_notas = 0.0;
	
	cout<<"A continuacion digite las 5 notas acumuladas en el semestre para asi determinar su promedio en el semestre: \n";
	
	while(contador_notas <= 5)
	{
		cout<<"\nDigita la nota "<<contador_notas<< ": ";
		cin>>nota;
		
		acumulador_notas = acumulador_notas + nota; 
		contador_notas ++;
		
	}
	
		promedio = acumulador_notas / 5;
	
	cout<< "\nEl promedio de las notas es: "<<promedio<<endl;
	
	system ("pause");
	return 0;
	
}

