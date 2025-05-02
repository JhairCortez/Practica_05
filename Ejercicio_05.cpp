#include <iostream>
using namespace std;

void mostrarContinuidad(int n)
{
    while (n < 100)
        n++;
        cout << n << " ";
}

int main()
{
    int numero;
    cout << "Ingrese un número natural menor que 100: ";
    cin >> numero;
    if (numero >= 1 && numero < 100)
        mostrarContinuidad(numero);
    else
        cout << "Número no válido" << endl;
    return 0;
}
