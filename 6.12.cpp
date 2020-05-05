
#include <iostream>

using namespace std;

void calculateCharges() {
    
    int numberCar = 1;
    float charge = 0;
    float hours;
    cout << "Number" << "  " << "Hours" << "  " << "Charge" << "  " << endl;
    while (numberCar <= 3) {
        cin >> hours;
        if (hours <= 3) {
            charge =  20.00;
            
        }
        if (hours > 3 && hours < 24) {
            charge =  20.00 + ((hours - 3) * 5.00);
        }
        if(hours==24) {
            charge =  50.00;
        }
        cout << numberCar << "       " << hours << "       " << charge  << endl;
        numberCar += 1;
    }
    
}

int main()
{
    calculateCharges();
    
}

