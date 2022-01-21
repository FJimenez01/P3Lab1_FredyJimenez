#include <iostream>

using namespace std;

bool esPrimo(int numero) {
	if (numero == 0 || numero == 1 || numero == 4) return false;
	for (int x = 2; x < numero / 2; x++) {
		if (numero % x == 0) return false;
	}
	return true;
}

int main(int argc, char** argv) {
	int n;

	cout << "Ingrese n: ";
	cin >> n;

	while(n > 100) {
		cout << endl << "Error. El numero debe ser menor que 100." << endl << endl
		     << "Ingrese n: ";
		cin >> n;
	}

	for(int i= 0; i < n; i++) {

		if(i%2 == 0) {
			int counter = 0;
			for(int j=0; j < n; j++) {
				for(int k=0; k < n; k++) {
					if(esPrimo(k) && esPrimo(j)) {
						if(k+j == i) {
							cout << j << " + " << k << " = " << i << endl;
							counter++;
							break;
						}
					}
				}
				if (counter == 1) {
					break;
				}
			}
		}
	}
}
