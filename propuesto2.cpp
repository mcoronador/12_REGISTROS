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
		cin>>personas[i].nombre;
		cin>>personas[i].dni;
		cin>>personas[i].edad;
		
		suma = suma + personas[i].edad;
	
	if (personas[i].edad>50) {
		mayores++;
	} 
	
	 }
	 promedio= (float)suma/n;
}
