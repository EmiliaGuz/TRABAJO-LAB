#include <iostream>

using namespace std;

int main()
{
    int number;
    int inver, res, change,tam;
    inver = 0, res = 0;
    cout << "Introduzca un numero de 5 digitos: ";
    cin >> number;
    cout << endl;
    change = number;
    tam = sizeof(number);
    
    while (change!=0){
        if(tam-1<5){
            res = change % 10;
            change = change / 10;
            inver = (inver * 10) + res;
            //cout << res << " ";
        }
        else {
            cout << "Fuera del rango, ingrese de nuevo";
        }
    }
    cout << endl;
    cout << "El numero en reversa es: "<<inver << endl;
    cout << endl;

    if (inver == number) {
        cout << "Palindromo";
    }
    if (inver != number) {
        cout << "No es palindromo";
    }


    


        
}

