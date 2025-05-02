#include <iostream>
using namespace std;

void mostrarDivisores(int n)
{
    cout << "Divisores propios de " << n << ": ";
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            cout << i << " ";
    cout << endl;
}

int main()
{
    int numero;
    cout << "Ingrese un número natural: ";
    cin >> numero;
    if (numero > 1)
        mostrarDivisores(numero);
    else
        cout << "Número no válido" << endl;
    return 0;
}
