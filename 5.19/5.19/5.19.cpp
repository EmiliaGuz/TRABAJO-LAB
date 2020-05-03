
#include <iostream>

using namespace std;

int main()
{
    int pi=0;
    int n ;
    int num = 4;
    int den = 3;
    cout << "Introduzca la cantidad de la serie de pi: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        pi = num - (num / den)+pi;
        den += 2;
    }
    cout << "El valor de pi es: " << pi;
}
