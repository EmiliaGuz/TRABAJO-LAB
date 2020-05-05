#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero, n1=0, n2=1;
    int n,i=0;
    cout << "Introduce numero : ";
    cin >> numero;
    cout << "Es la cantidad de elementos en la serie fibonacci)
    while(i<numero) {
        n = n2;
        n2 += n1;//Intercambio de variable
        n1 = n;
        cout << n1 << " ";
        i++;
    }
    return 0;
}

