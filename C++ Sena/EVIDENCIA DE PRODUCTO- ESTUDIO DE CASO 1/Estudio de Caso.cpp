#include <iostream>

using namespace std;

int main() {
	char admin_vent_zapatos;
	int dig_ref_zapato;
	char dig_descript_zapato[30];
	int dig_talla;
	char dig_dispo_S_N;
	int dig_cost;
	int dig_precio_venta;
	
	cout<<"Hola Sofia. Bienvenida a tu aplicacion de administracion de venta de zapatos!" <<endl<<endl;

	cout<<"Digite la referencia del zapato:"<<endl;
	cin>>dig_ref_zapato;
	cin.ignore(); 
	//Tuve que colocar la funcion cin.ignore() debido a que al compilar, el cin.getline() de la linea 22 no aparecia y se saltaba a la linea 26.
	//Con esta funcion se limpia el buffer del cin>> anterior por lo que descartaria el salto de linea que ha quedado en el buffer de entrada . Le doy las gracias a stackoverflow por ayudarme haha.
	cout<<"\nDigite una descripcion del zapato:"<<endl;
	cin.getline(dig_descript_zapato, 30);
	
	
	cout<<"\nDigitar talla del zapato:"<<endl;
	cin>>dig_talla;
	
	cout<<"\nDigite la letra S si esta disponible o N si no lo esta:"<<endl;
	cin>>dig_dispo_S_N;
	
	cout<<"\nDigite el costo del zapato:"<<endl;
	cin>>dig_cost;
	
	cout<<"\nDigite el precio de venta del zapato:"<<endl;
	cin>>dig_precio_venta;
	
	system("cls");
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:"<<endl<<endl;
	
	cout<<"REFERENCIA DEL ZAPATO: "<<dig_ref_zapato<<endl;
	cout<<"DESCRIPCION DEL ZAPATO: "<<dig_descript_zapato<<endl;
	cout<<"TALLA: "<<dig_talla                           <<endl;
	cout<<"DISPONIBILIDAD S/N: "<<dig_dispo_S_N          <<endl;
	cout<<"COSTO ZAPATO: "<<dig_cost                     <<endl;
	cout<<"PRECIO DE VENTA: "<<dig_precio_venta          <<endl<<endl;
	
	cout<<"Gracias por digitar la informacion!"<<endl;
	cout<<"Feliz dia Sofia!"<<endl;
	//FIN DEL PROGRAMA
	
	cout<<"\nNOMBRE DEL ESTUDIANTE: Andres Felipe Fuentes Atencia. \n";
	
	system("pause");
	
}
