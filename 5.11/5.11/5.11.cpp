#include <iostream>

using namespace std;

int main()
{
    int inicio;
    int max=0;
    cout << "Ingrese numero: ";
    cin >> inicio;
    for (int i = 0; i < inicio; i++) {
        int number, number1;
        cout << "Ingrese numeros: ";
        cin >>number;
        cout << endl;
        
        if (number > max) {
            max = number;
           
        }
        cout << "El mayor es: " << max << endl;

    }
}


