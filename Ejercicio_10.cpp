#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Ingrese un número entre 10 y 20: ";
    cin >> num;

    if (num >= 10 && num <= 20)
        for (int i = 1; i <= num; i++)
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        for (int i = num - 1; i >= 1; i--)
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
    else
        cout << "El número ingresado no está en el rango válido." << endl;
    return 0;
}
