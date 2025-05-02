#include <iostream>
using namespace std;

int main() 
{
    int num, max, min, count = 0;
    cout << "Ingrese números enteros (0 para terminar): ";
    cin >> num;
    if (num != 0) 
        max = min = num;
        count = 1;
        while (true) 
            cin >> num;
            if (num == 0)
                break;
            if (num > max)
                max = num;
            if (num < min)
                min = num;
            count++;
        cout << "Máximo: " << max << endl;
        cout << "Mínimo: " << min << endl;
        cout << "Cantidad de números ingresados: " << count << endl;
    } else 
    {
        cout << "No se ingresaron números." << endl;
    }
}
