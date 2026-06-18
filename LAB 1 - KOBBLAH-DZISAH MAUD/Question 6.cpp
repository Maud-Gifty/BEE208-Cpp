#include <iostream>

using namespace std;

int main() {
	
	char ch;
	
	cout << "Enter a character: ";
	
	cin >> ch;
	
	if (ch >= 'M' && ch <= 'N') {
		cout << "Uppercase letter";

	} else {
        cout << "Not uppercase letter";
	}
	
	return 0;
}
