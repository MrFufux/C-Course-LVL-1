#include<iostream>

using namespace std;

int main() {
	
	int n1, n2;
	
	cout<<"Digite el primer numero: \n";
	cin>>n1;
	
	cout<<"\nDigite el segundo numero: \n";
	cin>>n2;
	
	if(n1 > n2)
	{
		cout<<"\nEl primer numero es mayor que el segundo. \n";	
	} 
	
	else if (n1 == n2)
	{
		cout<< "\nLos dos numeros son iguales.\n";	
	}
	
	else{
		cout<<"\nEl segundo numero es mayor que el primero. \n\n";	
	}
	
	system("pause");
	return 0;
	
}
