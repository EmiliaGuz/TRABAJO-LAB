#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    int n1 = 0, n2 = 1;

    int n;

    cout << "Fibonacci: "<< endl;

    while (true) {
        
        if (n1 == 0)
        {
            cout << n1 << " ";
        }
        n = n2;

        n2 += n1;//Intercambio de variable

        n1 = n;

        cout << n1 << " ";

        }

    return 0;

}
