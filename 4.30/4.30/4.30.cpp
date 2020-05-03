#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero, n1=0, n2=1;
    int n;
    cout << "Introduce numero : ";
    cin >> numero;
    cout << "Es la cantidad de elementos en la serie fibonacci)
    for (int i = 0; i < numero; i++) {
        n = n2;
        n2 += n1;//Intercambio de variable
        n1 = n;
        cout << n1 << " ";
    }
    return 0;
}

