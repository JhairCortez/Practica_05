#include <iostream>
using namespace std;

string literal(int d)
{
    if (d == 0) return "cero";
    if (d == 1) return "uno";
    if (d == 2) return "dos";
    if (d == 3) return "tres";
    if (d == 4) return "cuatro";
    if (d == 5) return "cinco";
    if (d == 6) return "seis";
    if (d == 7) return "siete";
    if (d == 8) return "ocho";
    if (d == 9) return "nueve";
    return "";
}

void mostrarDigitos(int n)
{
    if (n < 10)
        cout << n << " " << literal(n) << endl;
    else
        mostrarDigitos(n / 10);
        cout << n % 10 << " " << literal(n % 10) << endl;
}

int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero < 0)
        numero *= -1;
    mostrarDigitos(numero);
    return 0;
}
