#include <iostream>
using namespace std;

int main() {
	enum Elektro {Pikachu, Magneton, Voltoball};
	enum Feuer {Glumanda, Vulpix, Arkani};
	for( int i = 0; i <= 5; i++) {
		if( i == 0) {
			cout << "Art Elektropokemon:" << endl;
		} else if( i == 3) {
			cout << endl;
			cout << "Art Feuerpokemon:" << endl;
		}
		if( i <= 2) {
			Elektro Name = Elektro(i);
			switch(Name) {
				case Pikachu: cout << "Pikachu" << endl; break;
				case Magneton: cout << "Magneton" << endl; break;
				case Voltoball: cout << "Voltoball" << endl; break;
			}
		}
		if( i >= 3) {
			Feuer Name = Feuer(i-3);
			switch(Name) {
				case Glumanda: cout << "Glumanda" << endl; break;
				case Vulpix: cout << "Vulpix" << endl; break;
				case Arkani:  cout << "Arkani" << endl; break;
			}
		}
	}
	return 0;
}
