#include <iostream>
using namespace std;

int main()
{
	double euro, pound, usd, cny, pound_correct;
	cin >> euro;

	//Umrechnung von euro nach pfund
	pound = euro / 0.86;
	pound_correct = euro * 0.86;
	usd = euro * 1.11;
	cny = euro * 7.84;
	//Präzision auf zwei Nachkommastellen
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	//Ausgabe
	cout << euro << "Euro sind " << pound << "Pfund." << endl;
	cout << "... sind " << usd << " Dollar" << endl;
	cout << "... sind " << cny << " Renminbi" << endl;
	return 0;
}
