#include <iostream>

using namespace std;

void reverseDigit()
{
    int reverse,number;
    cout << "Introduzca un numero: ";
    cin >> number;
    cout << endl;
    cout << "Reverse's number: ";
    while (number > 0) 
    {
        reverse = number % 10;
        number = number / 10;        
        cout << reverse;
    }
}

int main()
{
    reverseDigit();
}
