#include <iostream>
using namespace std;

void mostrarSerie(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "(" << i << "^" << i - 1 << "/" << i + 1 << "!)";
        if (i % 2 == 0 && i != n)
            cout << " + ";
        else if (i != n)
            cout << " - ";
    cout << endl;
}

int main()
{
    int cantidad;
    cout << "Ingrese la cantidad de términos: ";
    cin >> cantidad;
    if (cantidad > 0)
        mostrarSerie(cantidad);
    else
        cout << "Cantidad no válida" << endl;
    return 0;
}
