#include <iostream>
using namespace std;

int main() {
	cout << "0 to 50 in increments of 1" << endl;
	for (int i = 0; i <= 50; i++) {
		cout << i << endl;
	}

	cout << "50 to 0 in decrements of 1" << endl;
	for (int i = 50; i >= 0; i--) {
		cout << i << endl;
	}

	cout << "30 to 50 in increments of 1" << endl;
	for (int i = 30; i <= 50; i++) {
		cout << i << endl;
	}

	cout << "50 to 10 in decrements of 2" << endl;
	for (int i = 50; i >= 10; i -= 2) {
		cout << i << endl;
	}

	cout << "100 to 200 in increments of 5" << endl;
	for (int i = 100; i <= 200; i += 5) {
		cout << i << endl;
	}
}