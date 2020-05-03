#include <iostream>

using namespace std;

int main()
{
    int tam;
    int limite=20;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> tam;

    if (tam <= limite && tam>=1) {
        for (int i = 1; i <= tam; i++) {
            for (int j = 1; j <= tam; j++) {
                if ((i == tam || i == 1) || (j == tam || j == 1))
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Numero fuera del rango, intente de nuevo" << endl;
    }
    
}

