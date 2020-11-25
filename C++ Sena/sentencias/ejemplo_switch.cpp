//ESTATUTO SWITCH
//estructura que permite establecer los diferentes estados de una expresion y conforme a ello
//ejecuta la sentencia donde se cumple y despues de finalizada el programa sale del switch.

#include<iostream>

using namespace std;

int main () {
	
	int dia;
	string nombre_dia; //variable tipo string.Se asigna el valor sin necesidad de ser digitado por el usuario.
	
	cout<<"Digita un dia de la semana para determinar su nombre: \n";
	cin>>dia;
	
	switch(dia) //se define la estructura switch y se establece como expresion la variable dia
	{
		case 1:                     //Se interpretaria: 
			nombre_dia = "Domingo"; //"En caso de que el dia sea igual a 1, asigne a la variable nombre_dia el valor 'Domingo.
			break;                  //El break significa que el programa ya cumplio su objetivo por lo que no hay necesidad de validar mas casos.
		
		case 2:
			nombre_dia = "Lunes";
			break;
		
		case 3:
			nombre_dia = "Martes";
			break;
			
		case 4:
			nombre_dia = "Miercoles";
			break;
		
		case 5:
			nombre_dia = "Jueves";
			break;
		
		case 6:
			nombre_dia = "Viernes";
			break;
		
		case 7:
			nombre_dia = "Sabado";
			break;
		
		default:             //Se establece una opcion por defecto (default) antes de salir del estatuto switch
			nombre_dia = "";  //Esto es, en caso de que el valor digitado no corresponda a ninguna de las opciones.
			break;             
			
	}

	if(nombre_dia != "")
	{
		cout<< "El dia es: "<<nombre_dia<<endl<<endl;
	}
	else
	{
		cout<<"El numero digitado no corresponde a dias de la semana \n\n";
	
	}
			
	system("pause");
	
	return 0;
		
			
	}

