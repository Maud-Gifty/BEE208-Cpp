#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long binary, decimal = 0;
	int remainder, i = 0;
	
	cout << "Enter binary number: ";
	cin >> binary;
	
	long temp = binary;
	
	while (temp != 0) {
		remainder = temp % 10;
		decimal += remainder * pow(2, i);
		i++;
		temp /= 10;
	}
	
	cout << "Binary " << binary << " = Decimal " << decimal;
	
	return 0;
}
