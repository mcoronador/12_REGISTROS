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
	empleados empleados [100];
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
		cin>>empleados[i].salario;
		}
		
	for (int i=0; i<n; i++)
	{
		cout<<"empleado"<<i+1<<endl;
		cout<<"numero"<<empleados[i].numero<<endl;
		cout<<"nombre"<<empleados[i].nombre<<endl;
		cout<<"ventas";
	
	for ( int j=0; j<12;j++)
	{
		cout empleados[i].ventas[j]<<"";
	}
	cout<<endl;
	cout<<"salario:"<<empleados[i].salaro<<endl;
	}	
	}
	return 0;
}
