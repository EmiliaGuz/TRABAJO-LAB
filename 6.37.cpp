
#include <iostream>

using namespace std;

int fibonacciSerie(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return fibonacciSerie(number - 1) + fibonacciSerie(number - 2);
    }
}

int main()
{
    int n;
    cout << "Introduzca un numero: ";
    cin >> n;
    cout << "La serie es: " << fibonacciSerie(n);
}
