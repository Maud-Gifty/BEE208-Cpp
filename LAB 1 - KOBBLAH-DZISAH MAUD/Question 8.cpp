#include <iostream>

using namespace std;

int main() {
	int num;
	
	cout << "Enter an integer: ";
	cin>> num;
	
	if (num & 2 == 1) {
		cout << "Odd number";
	
	} else {
		cout << "Even number";
	}

	return 0;
}
