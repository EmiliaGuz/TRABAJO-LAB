#include <iostream>
using namespace std;



int main()
{
    int n = 10;

    cout << "Pattern 1: " << endl;

    for (int i = 1; i <= n; i++)//Salto de linea horizontal
    {
        for (int j = 1; j <= i; j++)//dibuja asteriso
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << '\n';

    cout << "Pattern 2: " << endl;

    for (int i = 10; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
 
    cout << '\n';

    cout << "Pattern 3: " << endl;

    for (int x = 10; x >= 1; x--)
    {
        for (int y = n - 1; y >= x; y--)
        {
            cout << " ";
        }
        for (int w = 1; w <= x; w++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << '\n';

    cout << "Pattern 4: " << endl;

    for (int x = 1; x <= n; x++)
    {
        for (int y = n - 1; y >= x; y--)
        {
            cout << " ";
        }
        for (int w = 1; w <= x; w++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
