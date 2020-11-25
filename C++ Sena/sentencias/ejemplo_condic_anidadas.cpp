#include<iostream>

using namespace std;

int main () {
	
	float nota;
	
	cout<<"Digitar Calificacion \n";
	cin>>nota;
	
	//ingresar las notas entre los valores 0 y 5.
	// && operador logico and.
	if (nota > 0.0 && nota <= 5.0)
	{
		if (nota < 3)
		{
			cout<< "Has reprobado la materia. \n\n";
		}
		
		else if(nota >= 3)
		{
			cout<<"Has aprobado la materia. \n\n";
		}
}
else
{
	cout<<"La calificacion digitada no es valida. \n\n";
}	

system("pause");
return 0;
	
}

