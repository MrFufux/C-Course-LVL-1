#include <iostream>

using namespace std;

int main () {
	
	int a, b;
	// \n es salto de linea
	cout<<"Digite los numeros para realizar las operaciones basicas.\n\n";
	cout<< "Digite el numero a = \n";
	cin>> a;
	cout<< "\nDigite el segundo numero b = \n";
	cin>> b;
	
	//suma
	cout<< "\nEl resultado con operadores de asignacion es: \n\n";
	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es " << b <<"\n";
	cout<< a << " += " << b << " = ";
	a += b; //a += b es la abreviacion de a + b
	cout<< a <<"\n\n";
	
	//resta
	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es " << b <<"\n";
	cout<< a << " -= " << b << " = ";
	a -= b; //a -= b es la abreviacion de a - b
	cout<< a <<"\n\n";
	
	//multiplicacion
	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es " << b <<"\n";
	cout<< a << " *= " << b << " = ";
	a *= b; //a *= b es la abreviacion de a * b
	cout<< a <<"\n\n";
	
	//division
	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es " << b <<"\n";
	cout<< a << " /= " << b << " = ";
	a /= b; //a /= b es la abreviacion de a / b
	cout<< a <<"\n\n";
	
	//modulo
	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es " << b <<"\n";
	cout<< a << " %= " << b << " = ";
	a %= b; //a %= b es la abreviacion de a % b. El residuo de la division entre los numeros a y b.
	cout<< a <<"\n\n";
	
	system("pause");
	return 0;
		
}



