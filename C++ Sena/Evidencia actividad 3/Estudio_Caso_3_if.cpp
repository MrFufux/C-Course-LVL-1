#include <iostream>


using namespace std;

int main() {
	char admin_vent_zapatos, dig_dispo_S_N, dig_descript_zapato[30], tipo_zapato;
	int dig_ref_zapato, dig_talla, cant_zapat, cost_uni_zapat, precio_unidad, precio_6_uni, utilidad_unidad;
	float porcent_utilidad, costo_total, util_total;
	
	
	cout<<"Hola Sofia. Bienvenida a tu aplicacion de administracion de venta de zapatos!" <<endl<<endl;
	//Referencia zapatos
	cout<<"Digite la referencia del zapato (Solo Numeros): "<<endl;
	cin>>dig_ref_zapato;
	cin.ignore(); 
	//descripcion zapatos
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
	
	system("pause");
	system("cls");
	
	//definicion condicionales
	if (cost_uni_zapat <= 30000)
	{
		porcent_utilidad = 50;
		
		//Utilidad por unidad
		utilidad_unidad = cost_uni_zapat * 0.5;
		
		//precio unidad
		precio_unidad = cost_uni_zapat + utilidad_unidad;
		
		//precio total 6 zapatos
		precio_6_uni = precio_unidad * cant_zapat;
		
		//utilidad total
		util_total = utilidad_unidad * cant_zapat;
	}
	
	else if (cost_uni_zapat > 30000 && cost_uni_zapat <= 60000)
	{
		porcent_utilidad = 40;
		
		//Utilidad por unidad
		utilidad_unidad = cost_uni_zapat * 0.4;
		
		//precio unidad
		precio_unidad = cost_uni_zapat + utilidad_unidad;
		
		//precio total 6 zapatos
		precio_6_uni = precio_unidad * cant_zapat;
		
		//utilidad total
		util_total = utilidad_unidad * cant_zapat;
	}
	
	else if (cost_uni_zapat > 60000)
	{
		porcent_utilidad = 30;
		//Utilidad por unidad
		utilidad_unidad = cost_uni_zapat * 0.3;
		
		//precio unidad
		precio_unidad = cost_uni_zapat + utilidad_unidad;
		
		//precio total 6 zapatos
		precio_6_uni = precio_unidad * cant_zapat;
		
		//utilidad total
		util_total = utilidad_unidad * cant_zapat;
	}
	
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:"<<endl<<endl;
	
	cout<<"REFERENCIA DEL ZAPATO: "      <<dig_ref_zapato      <<endl;
	
	//TIPO DE ZAPATO A, B, C
	if (cost_uni_zapat <= 30000)
	{
		cout<<"TIPO DEL ZAPATO: A " <<endl;
	}
	else if (cost_uni_zapat > 30000 && cost_uni_zapat <= 60000)
	{
		cout<<"TIPO DEL ZAPATO: B " <<endl;
	}
	else if (cost_uni_zapat > 60000)
	{
		cout<<"TIPO DEL ZAPATO: C " <<endl;
	}
	
	cout<<"DESCRIPCION DEL ZAPATO: "     <<dig_descript_zapato <<endl;
	cout<<"TALLA: "                      <<dig_talla           <<endl;
	cout<<"DISPONIBILIDAD S/N: "         <<dig_dispo_S_N       <<endl;
	cout<<"CANTIDAD DE ZAPATOS: "        <<cant_zapat          <<endl;
	cout<<"COSTO UNIDAD: "               <<cost_uni_zapat      <<endl;
	cout<<"COSTO TOTAL: "                <<costo_total         <<endl;
	cout<<"PRECIO UNIDAD: "              <<precio_unidad       <<endl;
	cout<<"PRECIO TOTAL DE 6 UNIDADES: " <<precio_6_uni        <<endl;
	cout<<"UTILIDAD POR UNIDAD: "        <<utilidad_unidad     <<endl;
	cout<<"UTILIDAD TOTAL: "             <<util_total          <<endl;
	cout<<"PORCENTAJE DE UTILIDAD: "     <<porcent_utilidad<< " %." <<endl<<endl;
	
	cout<<"Gracias por digitar la informacion!"<<endl;
	cout<<"Feliz dia Sofia!"<<endl;
	//FIN DEL PROGRAMA
	
	cout<<"\nNOMBRE DEL ESTUDIANTE: Andres Felipe Fuentes Atencia. \n";
	
	system("pause");
	
}
