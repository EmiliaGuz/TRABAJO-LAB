
#include <iostream>

using namespace std;

void minuteTime()
{
    int day=0, hour=0, minute=0;
    cout << "Introduzca el dia: ";
    cin >> day;
    cout << "Introduzca la hora: ";
    cin >> hour;
    cout << "Introduzca los minutos: ";
    cin >> minute;

    int add = 0, add1 = 0,add2=0;
    int total = 0;
    string mes;

    if(day!=0){
        add = day * 24; //convertir dias a horas
        add1 = add * 60; //conver horas a min
        add2 = add1 + (hour * 60);
        total =  add2 + minute;
        cout << "El total en minutos: "<< total<< endl;
        
        cout << "Mes: ";
        cin >> mes;
    }
    if (day == 0)
    {
        add1 = hour * 60;
        total = add1 + minute;
        cout << "El total en minutos: " << total << endl;
        
        
    }

}

int main()
{
    
    minuteTime();
}

