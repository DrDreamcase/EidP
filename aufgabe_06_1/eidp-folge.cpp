#include <iostream>
#include <cmath>
using namespace std;

/*long long rekEidp(unsigned int n , unsigned int& count) {
 count++;
 if(n == 1 || n == 2) return 1;
 return rekEidp(n - 1,count) + 3 * rekEidp(n-2, count);
 }*/

long long rekEidp(unsigned int n , unsigned int& count) {

	if (n == 1) {
		return 1;
	} else if (n == 2) {
		count++;
		return 1;
	} else
	{
		count++;
		return rekEidp(n - 1, count) + 3 * rekEidp(n - 2, count);

	}
}

long long itEidp(unsigned int n, unsigned int& count) {
	long long a;
	long long a_1; 
	long long temp;

	for (unsigned int i = 1; i <= n; i++) {
		if(i == 1) {
			a = 1;
			a_1 = 0;
		} else {
			temp = a;
			a += 3 * a_1;
			a_1 = temp;
			count++;
		}
	}
	return a;
}

long long moivreBinetEidp( unsigned int n) {
	return pow(sqrt(13), -1) * (pow(((1 + sqrt(13))/2), n) - pow(((1 - sqrt(13))/2), n));
}

int main() {
	unsigned int n;
	unsigned int count = 0;
	cout << "Geben Sie n ein:" << endl;
	cin >> n;
	cout << "Ergebnisse:" << endl;
	cout << "rekEidp: " << rekEidp(n, count) << endl;
	cout << "Additionen rekEidp: " << count << endl;
	count = 0;
	cout << "itEidp: " << itEidp(n, count) << endl;
	cout << "Additionen itEidp: " << count << endl;
	cout << "moivreBinetEidp: " << moivreBinetEidp(n) << endl;
	return 0;
}
