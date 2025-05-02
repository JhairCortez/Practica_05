#include <iostream>
using namespace std;

void convertirAHexadecimal(int numero)
{
    char hex[20];
    int i = 0;
    while (numero > 0)
        int resto = numero % 16;
        if (resto < 10)
            hex[i] = resto + '0';
        else
            hex[i] = resto - 10 + 'A';
        i++;
        numero = numero / 16;
    
    cout << "Hexadecimal: ";
    for (int j = i - 1; j >= 0; j--)
        cout << hex[j];
    cout << endl;
}

int main()
{
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    convertirAHexadecimal(n);
    return 0;
}
