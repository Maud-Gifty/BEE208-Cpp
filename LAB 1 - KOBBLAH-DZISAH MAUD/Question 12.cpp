#include <iostream>

using namespace std;

int main() {
	int num;
	
	cout << "Enter an integer: ";
    cin >> num;
	
	if (num % 2 != 0 && num % 3 == 0) {
       cout << num << "is odd and divisible by 3";
	
	} else {
	   cout << num << "does not satisfy both conditions";
	}
	
	return 0;
}
