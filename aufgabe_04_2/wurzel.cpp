#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int kill;

double wurzel(double a) {
	double x;
	double temp;
	for (int i = 0; i <= 100; i++) {
		if (i == 0) {
			x = (a + 1) / 2;
		} else {
			temp = x;
			x = 0.5 * (temp + (a / temp));
		}
		if (temp == x || i == 100) {
			kill = i;
			break;
		}
	}
	return x;
}

int main() {
	double a;
	cout << "Wert für a eingeben" << endl;
	cin >> a;
	cout << setprecision(17);
	cout << "Ergebnis wurzel(a): " << wurzel(a) << endl;
	cout << "Ergebnis sqrt(a): " << sqrt(a) << endl;
	cout << "Anzahl Schleifendurchläufe: " << kill << endl;
	cout << "Differenz: " << sqrt(a) - wurzel(a) << endl;
	return 0; 


}
