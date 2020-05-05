#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int binario;
    int num=0, add = 0, eleva=0;
    cout << "Introduzca un numero binario: ";
    cin >> binario;
    
    
    while (binario >= 10) {
        num = 0;
        while (binario >= 10) {
            binario -= 10;
            num++;
        }
        add = add + binario * pow(2, eleva);
        eleva++;
        binario = num;
    }
    
    if (binario == 1)
    {
        add = 1;
    }

    add = add + num * pow(2, eleva);
    cout << "Numero ingresado en decimal: " << add;

    return 0;
}

