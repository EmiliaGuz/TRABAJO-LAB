#include <iostream>

using namespace std;

int greatestCommonDivisor(int x, int y)
{
    if(x>y)
    {
        if(y==0)
        {
            return x;
        }
        else{
            return greatestCommonDivisor(y, x%y);
        }
    }
    else{
        cout << "Debe ser mayor el primer numero";
        cout << endl;
        return 0;

    }
}

int main()
{
    int num,num1;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese otro numero: ";
    cin >> num1;
    cout << "Maximo comun divisor: "<< greatestCommonDivisor(num,num1);
}
