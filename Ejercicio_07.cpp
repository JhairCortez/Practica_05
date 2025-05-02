#include <iostream>
using namespace std;

string obtenerMes(int n)
{
    if (n == 1) return "enero";
    if (n == 2) return "febrero";
    if (n == 3) return "marzo";
    if (n == 4) return "abril";
    if (n == 5) return "mayo";
    if (n == 6) return "junio";
    if (n == 7) return "julio";
    if (n == 8) return "agosto";
    if (n == 9) return "septiembre";
    if (n == 10) return "octubre";
    if (n == 11) return "noviembre";
    if (n == 12) return "diciembre";
    return "Número no válido";
}

int main()
{
    int numero;
    cout << "Ingrese un número entre 1 y 12: ";
    cin >> numero;
    cout << obtenerMes(numero) << endl;
    return 0;
}
