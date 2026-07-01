#include <iostream>
#include <string>

using namespace std;

struct Empleado
{
    string nombre;
    char sexo;
    float sueldo;
};

int main()
{
    int n;
    cin >> n;

    Empleado empleados[n];

    for (int i = 0; i < n; i++)
    {
        cin >> empleados[i].nombre;
        cin >> empleados[i].sexo;
        cin >> empleados[i].sueldo;
    }

    int mayor = 0;
    int menor = 0;

   
    return 0;
} 