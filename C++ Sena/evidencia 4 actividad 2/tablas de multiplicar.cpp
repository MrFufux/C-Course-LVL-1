//TABLAS DE MULTIPLICAR

#include <iostream>

using namespace std;

int main () {
	int numero_tabla = 1, number, numero_a_multi = 1, resultado;
	
	cout<<"           HOLA USUARIO. ESTE PROGRAMA ES PARA CALCULAR LAS TABLAS DE MULTIPLICAR: \n\n";
	
	while(numero_tabla <= 10)
	{
		cout<<"Tabla del "<<numero_tabla<<endl;
		
		numero_tabla ++;
		
	}
	
	cout<<"\nSELECCIONE UNA TABLA DE MULTIPLICAR ENTRE 1 Y 10: \n";
	cout<<"OPCIONAL: PUEDE CALCULAR LA TABLA DE MULTIPLICAR DEL NUMERO QUE QUIERA FUERA DE LA LISTA ANTERIOR. \n";
	cin>>number;
	
	cout<<"\nLa tabla de multiplicar de "<<number<< " es: \n";
	
	for(numero_a_multi = 1; numero_a_multi <=10 ; numero_a_multi++)
	{
		
		resultado = number *  numero_a_multi;
		
		cout<<number<<" x "<<numero_a_multi<<" = "<<resultado<<endl;
	}
	
	cout<<"\nMuchas gracias por usar este programa humano. \n\n";
	
	cout<<"Estudiante: Andres Felipe Fuentes Atencia. \n";
	system("pause");
	return 0;
		
		
}
