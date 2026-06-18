#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long binary, decimal = 0, temp;
	int remainder, i = 0, choice;
	
	cout << "Enter binary number: ";
	cin >> binary;
	
	temp = binary;
	while (temp != 0) {
		remainder = temp % 10;
		if (remainder != 0 && remainder != 1) {
			cout << "Invalid binary! Use only 0 and 1";
		return 0;
	}
	decimal += remainder * pow(2,i);
	i++;
	temp /= 10;
}
	
	cout << "\nBinary " << binary << " = Decimal "	<< decimal << endl;
	
	cout << "\n1. Binary to Hexadecimal";
	cout << "\n2. Binary to Octal";
	cout << "\n3. Show all";
	cin >> choice;
	
	if (choice == 1 || choice == 3) {
		cout << "Hexadecimal: " << hex << decimal << dec << endl;
	}
	if (choice == 2 || choice == 3) {
		cout << "Octal: " << oct << decimal << dec << endl;
	}
	return 0;
}
