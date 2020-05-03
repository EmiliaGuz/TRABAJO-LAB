
#include <iostream>
#include <cmath>

using namespace std;

int IntegerPower(int base, int exponent) {
	
	int n = pow(base, exponent);
	return n;
}

int main() {
	int a, b;
	cout << "Introduzca base: ";
	cin >> a;
	cout << "Introduzca exponente: ";
	cin >> b;
	cout << "El resultado es: ";
	cout << IntegerPower(a, b)<< endl;
}
