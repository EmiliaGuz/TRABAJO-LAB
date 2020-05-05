
#include <iostream>
#include <cmath>

using namespace std;

int IntegerPower(int base, int exponent) {

	if (exponent ==0)
	{
		return 1;
	}
	else
	{
		return base*IntegerPower(base, exponent-1);
	}

}

int main() {

	int a, b;
	cout << "Introduzca base: ";
	cin >> a;
	cout << "Introduzca exponente: ";
	cin >> b;

	cout << "El resultado es: ";
	cout << IntegerPower(a, b) << endl;

}