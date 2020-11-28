#include <iostream>
using namespace std;

int main() 
{
	char name_lastname[30];
	char sexo;
	int edad;
	
	cout<<"Please type your name and your last name: "<<endl;
	cin.getline(name_lastname, 30);
	cout<<"Type your age: "<<endl;
	cin.getline>>edad;
	cout<<"Type your sex. M/F: "<<endl;
	cin.getline>>sexo;
	
	system("cls");
	
	cout<<"Your name is: "<< name_lastname <<endl;
	cout<<"Your age is: "<< edad <<"years"<<endl;
	cout<<"Your sex is: "<< sexo <<endl;
	
	print('Your name is: '+ edad + 'years')
	
	
	
}

