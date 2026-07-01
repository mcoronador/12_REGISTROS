#include <iostream>
#include <string>
using namespace std;

struct Persona
{
	string nombre;
	string dni;
	int edad;
};

int main(){
	Persona personas [100];
	int n;
	int mayores=0;
	int suma=0;
	float promedio;
	 cin>>n;
	 
	for (int i=0;i<n;i++)
	{
		cin>>Persona[i].nombre;
		cin>>Persona[i].dni;
		cin>>Persona[i].edad;
	
	if (Persona[i].edad>50) {
		mayores++;
	} 
	
	 }
	 promedio= (float)suma/n;
}
