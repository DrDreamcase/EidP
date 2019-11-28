#include <iostream>
using namespace std;

int umwandlung(char a) {
	int x;
	if (a == 'x') {
		x = 10;
	} else {
		x = int(a) - '0';
	}
	return x;
}

bool isbn10check(char isbn[]) {
	int sum = 0;
	for (int i = 1; i < 10; i++) {
		sum += i * umwandlung(isbn[i - 1]);
	}
	if (sum % 11 == umwandlung(isbn[9])) {
		return true;
	} else {
		return false;
	}
}

int main() {
	char isbn_1[] = { '3', '4', '9', '9', '1', '3', '5', '9', '9', 'x' };
	char isbn_2[] = { '2', '8', '7', '1', '4', '9', '9', '3', '6', '7' };

	cout << "Zu isbn_1:" << endl;

	if (isbn10check(isbn_1) == true) {
		cout << "Yippie-Ya-yeah Schweinebacke, die ISBN";
		for (int i = 0; i < 10; i++) {
			cout << isbn_1[i];
		}
		cout << "ist gültig!" << endl;
	} else {
		cout << "isbn_1 is not the ISBN you're looking for" << endl;
	}

	cout << "Zu isbn_2:" << endl;
	if (isbn10check(isbn_2) == true) {
		cout << "Yippie-Ya<yeah Schweinebacke, die ISBN";
		for (int i = 0; i < 10; i++) {
			cout << isbn_2[i];
		}
		cout << " ist gültig!" << endl;
	} else {
		cout << "isbn_2 is not the ISBN you're looking for" << endl;
	}
	return 0;
}
