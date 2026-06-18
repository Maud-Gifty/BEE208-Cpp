#include <iostream>

#include <string>

using namespace std;

int main() {
	
	string text;
	bool found = false;
	cout << "Enter a string: ";
	cin >> text;
	
	for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'a') {
	
	        found = true;
	        break;
		}
	}
		
	if (found) {
        cout << "Contains 'a'";
	
	} else {
        cout << "Does not contain 'a'";
	}
	
	return 0;
}
