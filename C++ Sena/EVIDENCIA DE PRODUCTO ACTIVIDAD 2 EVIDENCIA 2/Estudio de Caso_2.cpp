#include <iostream>

using namespace std;

int main() {
	char admin_vent_zapatos, dig_dispo_S_N, dig_descript_zapato[30];
	int dig_ref_zapato, dig_talla, cant_zapat,cost_uni_zapat, costo_total, precio_unidad, precio_5_uni, utilidad_unidad, util_total;
	float porcent_utilidad;
	
	
	cout<<"Hola Sofia. Bienvenida a tu aplicacion de administracion de venta de zapatos!" <<endl<<endl;

	cout<<"Digite la referencia del zapato:"<<endl;
	cin>>dig_ref_zapato;
	cin.ignore(); 
	//Tuve que colocar la funcion cin.ignore() debido a que al compilar, el cin.getline() de la linea 22 no aparecia y se saltaba a la linea 26.
	//Con esta funcion se limpia el buffer del cin>> anterior por lo que descartaria el salto de linea que ha quedado en el buffer de entrada . Le doy las gracias a stackoverflow por ayudarme haha.
	//descripcion zapato
	cout<<"\nDigite una descripcion del zapato: "<<endl;
	cin.getline(dig_descript_zapato, 30);
	
	//talla zapatos
	cout<<"\nDigitar talla del zapato: "<<endl;
	cin>>dig_talla;
	
	//disponibilidad
	cout<<"\nDigite la letra S si esta disponible o N si no lo esta: "<<endl;
	cin>>dig_dispo_S_N;
	
	//cantidad de zapatos
	cout<<"\nDigite la cantidad de los zapatos disponibles: "<<endl;
	cin>>cant_zapat;
	cin.ignore();
	
	//costo por unidad
	cout<<"\nDigite el costo por unidad de zapatos: \n";
	cin>>cost_uni_zapat;
	
	//costo total
	costo_total = cost_uni_zapat * cant_zapat;
	cout<<"\nEl costo total es "<< costo_total;
	
	//precio unidad
	cout<<"\n\nDigite el precio por unidad de zapatos: \n";
	cin>>precio_unidad;
	
	//precio total 5 zapatos
	precio_5_uni = precio_unidad * cant_zapat;
	cout<<"\nEl precio total de 5 unidades es de: "<<precio_5_uni;
	
	//Utilidad por unidad
	cout<<"\n\nDigite la utilidad por unidad: \n";
	cin>>utilidad_unidad;
	
	//utilidad total
	util_total = utilidad_unidad * cant_zapat;
	cout<<"\nLa utilidad total es de: "<<util_total;
	
	//porcentaje de utilidad
	porcent_utilidad = (util_total / costo_total) * 100;
	cout<<"\n\nEL porcentaje de utilidad es de: \n"<<porcent_utilidad<<endl;
	//No se porque me muestra en el porcentaje un 0. Si la variable porcent_utilidad esta definida como float.
	
	system("pause");
	system("cls");
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:"<<endl<<endl;
	
	cout<<"REFERENCIA DEL ZAPATO: "      <<dig_ref_zapato      <<endl;
	cout<<"DESCRIPCION DEL ZAPATO: "     <<dig_descript_zapato <<endl;
	cout<<"TALLA: "                      <<dig_talla           <<endl;
	cout<<"DISPONIBILIDAD S/N: "         <<dig_dispo_S_N       <<endl;
	cout<<"CANTIDAD DE ZAPATOS: "        <<cant_zapat          <<endl;
	cout<<"COSTO UNIDAD: "               <<cost_uni_zapat      <<endl;
	cout<<"COSTO TOTAL: "                <<costo_total         <<endl;
	cout<<"PRECIO UNIDAD: "              <<precio_unidad       <<endl;
	cout<<"PRECIO TOTAL DE 5 UNIDADES: " <<precio_5_uni        <<endl;
	cout<<"UTILIDAD POR UNIDAD: "        <<utilidad_unidad     <<endl;
	cout<<"UTILIDAD TOTAL: "             <<util_total          <<endl;
	cout<<"PORCENTAJE DE UTILIDAD: "     <<porcent_utilidad <<endl<<endl;
	//No se porque me muestra en el porcentaje un 0. Si la variable porcent_utilidad esta definida como float.
	
	
	cout<<"Gracias por digitar la informacion!"<<endl;
	cout<<"Feliz dia Sofia!"<<endl;
	//FIN DEL PROGRAMA
	
	cout<<"\nNOMBRE DEL ESTUDIANTE: Andres Felipe Fuentes Atencia. \n";
	
	system("pause");
	
}
