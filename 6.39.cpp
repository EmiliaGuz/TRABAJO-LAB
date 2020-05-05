#include <iostream>

using namespace std;

void towerHanoi(int disk,int peg1, int peg2, int peg3)
{
    if (disk == 1)
    {
        cout << "Move disk from " << peg1 << " to " << peg3<< endl;
    }
    else
    {
        towerHanoi(disk - 1, peg1, peg3, peg2);
        cout << "Move disk from " << peg1 << " to " << peg3<< endl;
        towerHanoi(disk - 1, peg2, peg1, peg3);
    }
}


int main()
{
    cout << "Los clavijas son peg1 peg2 peg3\n";
    towerHanoi(3, 1,2,3);
}

