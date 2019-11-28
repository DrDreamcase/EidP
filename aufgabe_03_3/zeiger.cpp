#include <iostream>
using namespace std;

int main() {
	//Zeiger die auf
	int x = 42, y = -13, z = 23;
	int *a = &x, *b = &y, *c = &z;

	//Geben sie die deklariaerten Variablen in dem vorgegebenem Format aus.
	cout << "\t" << "\t" << "Adresse" << "\t" << "\t" << "Inhalt" << "\t"
			<< "\t" << "referenzierter Wert" << endl;
	cout << "Variable x" << "\t" << a << "\t" << *a << endl;
	cout << "Variable y" << "\t" << b << "\t" << *b << endl;
	cout << "Variable z" << "\t" << c << "\t" << *c << endl;
	cout << "Zeiger a" << "\t" << &a << "\t" << a << "\t" << *a << endl;
	cout << "Zeiger b" << "\t" << &b << "\t" << b << "\t" << *b << endl;
	cout << "Zeiger c" << "\t" << &c << "\t" << c << "\t" << *c << endl;
	//leerzeile
	cout << "\n" << endl;
	//tauschen ohne werte zu ändern
	cout << "\t" << "\t" << "Adresse" << "\t" << "\t" << "Inhalt" << "\t"
			<< "\t" << "referenzierter Wert" << endl;
	cout << "Variable x" << "\t" << a << "\t" << *a << endl;
	cout << "Variable y" << "\t" << b << "\t" << *b << endl;
	cout << "Variable z" << "\t" << c << "\t" << *c << endl;
	int *foo;
	foo = a;
	a = b;
	b = foo;
	cout << "Zeiger a" << "\t" << &a << "\t" << a << "\t" << *a << endl;
	cout << "Zeiger b" << "\t" << &b << "\t" << b << "\t" << *b << endl;
	cout << "Zeiger c" << "\t" << &c << "\t" << c << "\t" << *c << endl;
	//leerzeile
	cout << "\n" << endl;
	//z erhöhen auf 8
	*c += 8;
	cout << "\t" << "\t" << "Adresse" << "\t" << "\t" << "Inhalt" << "\t"
			<< "\t" << "referenzierter Wert" << endl;
	cout << "Variable x" << "\t" << a << "\t" << *a << endl;
	cout << "Variable y" << "\t" << b << "\t" << *b << endl;
	cout << "Variable z" << "\t" << c << "\t" << *c << endl;
	cout << "Zeiger a" << "\t" << &a << "\t" << a << "\t" << *a << endl;
	cout << "Zeiger b" << "\t" << &b << "\t" << b << "\t" << *b << endl;
	cout << "Zeiger c" << "\t" << &c << "\t" << c << "\t" << *c << endl;
	
}
