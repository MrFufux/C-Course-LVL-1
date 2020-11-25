//-------------------------ESTATUTO WHILE-----------------------------------------------------------

//REPETICION DE UNA SERIE DE INSTRUCCIONES SI SE CUMPLE UNA CONDICION.
//SE VALIDA UNA EXPRESION DEL TIPO BOOLEANO.

//ESTRUCTURA
//      while(condicion)
//  {  
//   sentencia
//   }

//Se leeria: MIENTRAS LA CONDICION SEA VERDADERA REALICE LAS SIGUIENTES INSTRUCCIONES

#include <iostream>

using namespace std;
int main () {
	
	int numero, resultado = 0; //el resultado es el que se va a mostrar en pantalla, el cual inicializa en cero.
	
	cout<<"Digita un numero para hallar los multiplos: \n";
	cin>>numero;
	cout<<"\nLos multiplos de "<<numero<<" son: \n";
	
	while(resultado < 100) 
	//se declara el ciclo y la condicion establecida para que el programa ingrese a el
	//es un valor < a 100.
	{
		resultado = resultado + numero;
		cout<<resultado<<endl;
		//la variable resultado se le agrega el valor digitado en la variable numero, para ser
		//mostrado en pantalla.
		//De este modo, la variable resultado se convirtio en un "acumulador", aumentando el valor
		//cada vez que se repitan las instrucciones.
		
		//PRIMERA ITERACION
		//resultado = 0 + 10
		//resultado = 10
		
		//SEGUNDA ITERACION
		//resultado = 10 + 10
		//resultado = 20
		
		//TERCERA ITERACION
		//resultado = 20 + 10
		//resultado = 30
		
		//CONTINUAN LAS ITERACIONES MIENTRAS QUE ES RESULTADO SEA < A 100
		//CUANDO SEA > A 100 SALE DEL CICLO WHILE
		
	
	}
	
	system("Pause");
	return 0;
	
}

