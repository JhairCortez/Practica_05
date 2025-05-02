#include <iostream>
using namespace std;

void mostrarAsteriscos(int n)
{
    if (n < 10)
    {
        cout << n << " ";
        for (int i = 0; i < n; i++)
            cout << "* ";
        cout << endl;
    }
    else
    {
        mostrarAsteriscos(n / 10);
        int d = n % 10;
        cout << d << " ";
        for (int i = 0; i < d; i++)
            cout << "* ";
        cout << endl;
    }
}

int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero < 0)
        numero = -numero;
    mostrarAsteriscos(numero);
    return 0;
}
