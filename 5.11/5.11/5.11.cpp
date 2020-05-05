#include <iostream>

using namespace std;

int main()
{
    int inicio;
    int min=0;
    cout << "Ingrese numero: ";
    cin >> inicio;
    for (int i = 0; i < inicio; i++) {
        int number, number1;
        cout << "Ingrese numeros: ";
        cin >>number;
        cout << endl;
        
        if (number < min) {
            min = number;
           
        }
        cout << "El menor es: " << min << endl;

    }
}


