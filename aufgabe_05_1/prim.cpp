////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void gibPrimfaktorenAus_1(int zahl, bool ist_prim[]);
void gibPrimfaktorenAus_2(int zahl, int anzahl_primzahlen, int primzahlen[]);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
	//zusatz (d)
	int *primzahlen = new int[1000];
	int anzahl_primzahlen = 0;
	//(a)
	bool *ist_prim = new bool[1000];
	for (int i = 0; i < 1000; i++)
	{
		switch (i) {
		case 0:
			ist_prim[i] = false;
			break;
		case 1:
			ist_prim[i] = false;
			break;
		default:
			ist_prim[i] = true;
			break;
		}
	}

	//(b).Sieb des Erasthones und befüllen von (d)
	int temp = 0;
	for (int i = 2; i < 1000; i++) {
		if (ist_prim[i] == true) {

			primzahlen[temp] = i;
			anzahl_primzahlen++;
			temp++;

			for (int k = 2; k <= 1000 / i; k++)
			{

				int x = k * i;
				ist_prim[x] = false;
			}
		}
}

	//Ausgabe des Ergebnisses des Siebes
	for (int i = 2; i < 1000; i++) {
		if (ist_prim[i] == true) {
			cout << i << " ist prim" << endl;
		} else {
			//gibPrimfaktorenAus_1(i, ist_prim);
			gibPrimfaktorenAus_2(i, anzahl_primzahlen, primzahlen);
		}
	}

	delete[] ist_prim;
	delete[] primzahlen;

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gibPrimfaktorenAus_1(int zahl, bool ist_prim[]) {

	cout << zahl << " wird zerlegt in: ";

	for (int i = 2; i < 1000; i++) {
		if (ist_prim[i] == true && zahl % i == 0)
			{
				cout << i << ",";
				zahl = zahl / i;
				i--;
			}
	}

	cout << endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gibPrimfaktorenAus_2(int zahl, int anzahl_primzahlen, int primzahlen[]) {
	cout << zahl << " wird zerlegt in: ";

	for (int i = 0; i < anzahl_primzahlen; i++) {
		if (zahl % primzahlen[i] == 0) {
			cout << primzahlen[i] << ",";
			zahl = zahl / primzahlen[i];
				i--;
			}
	}

	cout << endl;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
