#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 40; j > n * 2; j++)
        {
            if (j <= i || j >= n * 2 -1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    int px = n;
    int py = n;
    for (int x = 11; x >= n; x++) {
        for (int y = 11; y > n * 2; y++) {
            if (y > px && y < py) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        px--;
        py++;
        cout << endl;
    }
    return 0;
}