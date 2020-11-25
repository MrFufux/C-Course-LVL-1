#include<iostream>
#include<math.h>

using namespace std;

int main () {
	
	//definimos las variables correspondientes
	//Area de rectangulo
	float a_rectangulo, b_rectangulo, area_rectang;
	
	//Area triangulo
	float b_triang, h_triang, area_triang;
	
	//Area rombo
	float D_rombo, d_rombo, area_rombo;
	
	//Area paralelogramo
	float b_parale, h_parale, area_paralelo;
	
	//Area trapecio
	float B_trap, b_trap, h_trap, area_trap;
	
	//Area circulo
	float rad_circulo, area_circulo;
	int expo;
	
	
	cout<<"          ESTE ES UN PROGRAMA PARA HALLAR VARIAS AREAS DE FIGURAS GEOMETRICAS.\n\n";
	//Area de rectangulo----------------------------------------------------------------------
	cout<<"Area de un Rectangulo:";
	
	cout<<"\nDigite el lado a: \n";
	cin>> a_rectangulo;
	
	cout<<"\nDigite el lado b: \n";
	cin>> b_rectangulo;
	
	area_rectang = a_rectangulo * b_rectangulo;
	
	cout<<"\nEl area del rectangulo es de: "<< area_rectang << " metros cuadrados.\n";
	
	system("pause");
	system("cls");
	
	cout<<"          ESTE ES UN PROGRAMA PARA HALLAR VARIAS AREAS DE FIGURAS GEOMETRICAS.\n\n";
	//Area de triangulo------------------------------------------------------------------------
	cout<<"Area de un Triangulo:";
	
	cout<<"\nDigite la base: \n";
	cin>> b_triang;
	
	cout<<"\nDigite la altura: \n";
	cin>> h_triang;
	
	area_triang = (b_triang * h_triang) / 2;
	
	cout<<"\nEl area del triangulo es de: "<< area_triang << " metros cuadrados.\n";
	
	system("pause");
	system("cls");
	
	cout<<"          ESTE ES UN PROGRAMA PARA HALLAR VARIAS AREAS DE FIGURAS GEOMETRICAS.\n\n";
	//Area de un Rombo---------------------------------------------------------------------------
	cout<<"Area de un Rombo:";
	
	cout<<"\nDigite la diagonal D: \n";
	cin>> D_rombo;
	
	cout<<"\nDigite la diagonal d: \n";
	cin>> d_rombo;
	
	area_rombo = (D_rombo * d_rombo) / 2;
	
	cout<<"\nEl area del rombo es de: "<< area_rombo << " metros cuadrados.\n";
	
	system("pause");
	system("cls");
	
	cout<<"          ESTE ES UN PROGRAMA PARA HALLAR VARIAS AREAS DE FIGURAS GEOMETRICAS.\n\n";
	//Area de un Paralelogramo-------------------------------------------------------------------
	cout<<"Area de un Paralelogramo:";
	
	cout<<"\nDigite la base: \n";
	cin>> b_parale;
	
	cout<<"\nDigite la altura: \n";
	cin>> h_parale;
	
	area_paralelo = b_parale * h_parale;
	
	cout<<"\nEl area del paralelogramo es de: "<< area_paralelo <<" metros cuadrados.\n";
	
	system("pause");
	system("cls");
	
	cout<<"          ESTE ES UN PROGRAMA PARA HALLAR VARIAS AREAS DE FIGURAS GEOMETRICAS.\n\n";
	//Area de un Trapecio-------------------------------------------------------------------------
	cout<<"Area de un Trapecio:";

	cout<<"\nDigite la base mayor: \n";
	cin>> B_trap;
	
	cout<<"\nDigite la base menor: \n";
	cin>> b_trap;
	
	cout<<"\nDigite la altura: \n";
	cin>> h_trap;
	
	area_trap = ((B_trap * b_trap)/2) * h_trap;
	
	cout<<"\nEl area del trapecio es de: "<< area_trap << " metros cuadrados.\n";
	
	system("pause");
	system("cls");
	
	cout<<"          ESTE ES UN PROGRAMA PARA HALLAR VARIAS AREAS DE FIGURAS GEOMETRICAS.\n\n";
	//Area de un Circulo--------------------------------------------------------------------------
	cout<<"Area de un Circulo:";
	
	cout<<"\nDigite el radio: \n";
	cin>> rad_circulo;
	
	area_circulo = 3.14 * (rad_circulo * rad_circulo); 
	
	cout<<"\nEl area del circulo es de: "<< area_circulo << " metros cuadrados.\n";
	
	system("pause");
	system("cls");
	
	//Resumen de las areas-----------------------------------------------------------------------
	cout<<"          LAS AREAS DE LAS FIGURAS GEOMETRICAS SON:\n\n";
	
	cout<<"Rectangulo = "<< area_rectang << " metros cuadrados"<<endl<<endl;
	cout<<"Triangulo = "<< area_triang << " metros cuadrados"<<endl<<endl;
	cout<<"Rombo = "<< area_rombo << " metros cuadrados"<<endl<<endl;
	cout<<"Paralelogramo = "<< area_paralelo << " metros cuadrados"<<endl<<endl;
	cout<<"Trapecio = "<< area_trap << " metros cuadrados"<<endl<<endl;
	cout<<"Circulo = "<<area_circulo << " metros cuadrados"<<endl<<endl;
	
	cout<<"NOMBRE DEL ESTUDIANTE: ANDRES FELIPE FUENTES ATENCIA."<<endl;
	
	system("pause");
	
	return 0;
	
}
