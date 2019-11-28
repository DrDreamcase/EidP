#include <iostream>
using namespace std;

int main() {
	//Einlesen der Variablen
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	// Werte müssen positiv sein
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "Nicht alle Variablen sind positiv." << endl;
		return 1;
	}
	//Hilfsvariable zu zwischenspeichern
	int d;
	// Ist c die Hypothenuse ?
	if (c < a) {
		d = a;
		a = c;
		c = d;
	}
	if (c < b) {
		d = b;
		b = c;
		c = d;
	}
	//Überprüfen sie ob der Satz des Pythagoras stimmt.

	if (c * c == a * a + b * b) {
		cout << "Das Dreieck mit den Seitenlaengen " << a << "," << b << ","
				<< c
				<< "ist rechtwinklig" << endl;
	} else {
		cout << "Das Dreieck mit den Seitenlaengen" << a << "," << b << "," << c
				<< "ist nicht rechtwinklig" << endl;
	}
	
}
