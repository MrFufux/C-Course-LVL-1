#include<iostream>

using namespace std;

int main() {
	
	int referencia, talla, costo;
	char si_no, descripcion[40] ;
	
	
	cout<<"Hola Sofia. Este programa es para registrar varios tipos de zapatos. \n\n";
	cout<<"Se debe registrar hasta que el usuario decida que zapato quiere llevarse. \n";
	
	cout<<"\nDesea registrar un Zapato? s/n: ";
	cin>>si_no;
		
	
	while(si_no != 'n') {
		
		cout<<"\nDigite la referencia: ";
		cin>>referencia;
		cin.ignore();
		
		cout<<"Digite una descripcion: ";
		cin.getline(descripcion, 40);
	
		cout<<"Digite la talla: ";
		cin>>talla;
		
		cout<<"Costo del zapato: ";
		cin>>costo;
		
		cout<<"\nDesea registrar un Zapato? s/n: ";
		cin>>si_no;

	}
	
	while(si_no = 'n'){
		
		cout<<"\nFin de la aplicacion!\n";
		cout<<"\nGracias por usar la aplicacion sofia. Feliz dia! \n\n";
		break;
	
	}
	
	cout<<"Nombre estudiante: Andres Felipe Fuentes Atencia. \n\n";
	system("pause");
	return 0;
	
}
