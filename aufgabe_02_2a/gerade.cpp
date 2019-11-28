/*
 * gerade.cpp
 * Das Programm berechnt die Geradenparameter~$m, b$ fuer die Geradengleichung
 * f(x) = mx + b
 * Als Eingabe dienen die Punkte (x1, y1), (x2, y2)
 */

#include<iostream>
using namespace std;

int main() {
	double x1, y1, x2, y2, m, b;

	//++++++++++++++++++++++++++++++++++++++++++++
	// Hier bitte die Werte ueber Tastatureingaben
	// einlesen:
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;







  //++++++++++++++++++++++++++++++++++++++++++++

	//++++++++++++++++++++++++++++++++++++++++++++
	// Hier bitte die Berechnungsfolge einfuegen:
	m = (y2 - y1) / (x2 - x1);
	b = y1 - m * x1;

	//++++++++++++++++++++++++++++++++++++++++++++

	cout << "Die Gerade hat folgende Gleichung: f(x) = " << m << " * x + " << b
			<< endl;


	 double x3, y3;
	 cin >> x3;
	 cin >> y3;
	 if(y3 == m*x3 + b){
	 cout << " Der Punkt ( " << x3 << " , " << y3 << " ) liegt auf der Geraden " << endl;
	 } else{
	 cout << " Der Punkt ( " << x3 << " , " << y3 << " ) liegt nicht auf der Geraden" << endl;
	 }

	return 0;
}
