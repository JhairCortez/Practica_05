#include <iostream>
using namespace std;

int sumaDigitos(int n)
{
    int suma = 0;
    int signo = 1;
    if (n < 0)
        signo = -1;
        n = -n;
    while (n > 0)
        suma += n % 10;
        n = n / 10;
    return suma * signo;
}

int main()
{
    int a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    int sumaA = sumaDigitos(a);
    int sumaB = sumaDigitos(b);
    cout << "Suma dígitos A: " << sumaA << endl;
    cout << "Suma dígitos B: " << sumaB << endl;
    if (sumaA > sumaB)
        cout << "El mayor es: " << sumaA << endl;
    else if (sumaB > sumaA)
        cout << "El mayor es: " << sumaB << endl;
    else
        cout << "Ambos son iguales" << endl;
    return 0;
}
