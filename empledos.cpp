#include <iostream>
#include <string>
using namespace std;

struct empleado
{ int numero ;
string nombre;
float ventas [12];
float salario;
};

int main (){
	empleados [100];
	int n;
	cin>>n;
	
	for (int i=0 ; i<n;i++)
	{
		cin>>empleados[i].numero;
		cin>>empleados[i].nombre;
		
		for (int j=0; j<12; j++)
		{
		 cin>>empleado[i].ventas[j];
		 
		 }
		}
		
	}
}
