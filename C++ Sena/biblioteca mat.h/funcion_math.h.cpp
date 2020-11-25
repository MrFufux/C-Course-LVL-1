#include<iostream>
#include<math.h>

using namespace std;

int main() {
	cout<<"DEMOSTRACION DE FUNCIONES MATEMATICAS EN C++"<<endl<<endl;
	
	cout<<"funcion fmax para HALLAR EL MAYOR de los numeros: fmax(18.9, 18) = ";
	cout<< fmax(18.9, 18)<<endl<<endl;
	
	cout<<"funcion fmin para HALLAR EL MENOR de dos numero: fmin(18.9, 18) = ";
	cout<< fmin(18.9, 18)<<endl<<endl;
	
	cout<<"funcion ceil para REDONDEAR a una CIFRA SUPERIOR: ceil(18.7) = ";
	cout<< ceil(18.9)<<endl<<endl;
	
	cout<<"funcion floor para REDONDEAR a una CIFRA INFERIOR: floor(18.7) = ";
	cout<< floor(18.7)<<endl<<endl;
	
	cout<<"funcion pow para elevar un numero a una potencia: pow(9, 2) = ";
	cout<< pow(9, 2)<<endl<<endl;
	
	cout<<"funcion sqrt para HALLAR LA RAIZ CUADRADA de un numero: sqrt(81) = ";
	cout<< sqrt(81)<<endl<<endl;
	
	cout<<"funcion hypot para HALLAR LA HIPOTENUSA de un triangulo: hypot(81) = ";
	cout<< hypot(3, 4)<<endl<<endl;
	
	system("pause");
	return 0;
	
	
}
