#include <iostream>
using namespace std;

int contarCaracteres(char frase[])
{
    int i = 0;
    while (frase[i] != '\0')
        i++;
    return i;
}

int main()
{
    char frase[100];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 100);
    int total = contarCaracteres(frase);
    cout << "Cantidad de caracteres: " << total << endl;
    return 0;
}
