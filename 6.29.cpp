
#include <iostream> 
#include <cmath>

using namespace std;

bool esPrimo(int numero) {
	
	int divisor = 1, cont = 0;

	while (divisor <=numero) {
		if (numero % divisor == 0) {
			
			cont++;
		}
		divisor++;
	}

	if (cont == 2) {
		cout << "Es primo" << endl;
		return true;
	}
	else {
		cout << "NO es primo" << endl;
		return false;
	}
}

void rangoPrimo() {
	int n ;
	int rangoInicial=2,prim;
	int rangoFinal=10000;
	int cont = 0;

	while(rangoInicial<=rangoFinal){
		prim = 1;
		n = 1;
		
		while (n<=rangoInicial)
		{
			if (rangoInicial % n == 0) {
				cont += 1;
			}
			n++;
		}
		if (cont==2) {
			cout << rangoInicial<< " ";
		}
		cont = 0;
		rangoInicial++;
	}
	
}

void squareRoot()
{
	int n, inicio, fin;
	int prim;
	for (inicio = 2; inicio <= 10000; inicio++)
	{
		n = 2;
		prim = 1;
		fin = (int)sqrt(inicio);//square root of n
		while (n <= fin && prim)
		{
			if (inicio % n == 0)
			{
				prim = 0;
			}
			n++;
		}
		if (prim) {
			cout << inicio << " ";
		}
	}
}

void dividPrime()
{
	int first,cont, prim;

	for (first = 2; first <= 10000; first++)
	{
		prim = 1, cont = 2;
		while (cont <= first / 2 && prim)//n/2 upper limit
		{
			if (first % cont == 0)
				prim = 0;

			cont++;
		}

		if (prim)
			cout << first << " ";
	}

}
int main()
{
	int number;
	cout << "Ingrese un numero: ";
	cin >> number;
	esPrimo(number);
	rangoPrimo();
	squareRoot();
	dividPrime();
}