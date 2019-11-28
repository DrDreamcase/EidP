/*
 * Gibt Pokemon mit Namen und Typ aus
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//++++++++++++++++++++++++++++++++++++++++++++
	// Hier bitte die ihren Code einfuegen:
	string Elektro[3] = {"Pikachu", "Magneton", "Voltoball"};
	string Feuer[3] = {"Glumanda", "Vulpix", "Arkani"};
	for( int i = 0; i <= 5; i++) {
		/*if( i == 0) {
			cout << "Art Elektropokemon:" << endl;
			} else if( i == 3 ) {
				cout << endl;
				cout << "Art Feuerpokemon:" << endl;
				}*/
		switch(i) {
			case 0: cout << Elektro[0] << endl; break;
			case 1: cout << Elektro[1] << endl; break;
			case 2: cout << Elektro[2] << endl; break;
			case 3: cout << Feuer[0] << endl; break;
			case 4: cout << Feuer[1] << endl; break;
			case 5: cout << Feuer[2] << endl; break;
			}
		}
	

	//++++++++++++++++++++++++++++++++++++++++++++

	return 0;
}
