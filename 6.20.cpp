
#include <iostream>

using namespace std;

bool isFactor(int a,int b) {

    bool i = true;
    float c=0;
    if (a % b == 0) {
        c = a / b;
        
        cout << a << " es factor de " << b << endl;
        cout << "La division resulta: " << c << endl;

        return i;
    }

    cout << a << " NO es factor de " << b << endl;
    return !i; 
    
}
int main()
{
    int number1, number2;
    cout << "Ingrese un numero: ";
    cin >> number1;
    cout << "Ingrese otro numero: ";
    cin >> number2;
    isFactor(number1, number2);
}

