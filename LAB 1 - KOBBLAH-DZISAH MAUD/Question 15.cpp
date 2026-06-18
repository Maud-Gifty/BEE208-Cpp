#include <iostream>

using namespace std;

int main() {
	float num1, num2, larger;
	
	cout << "Enter first floating point number: ";
	cin >> num1;
	
	cout << "Enter second floating point number: ";
	cin >> num2;
	
	larger = (num1 > num2) ? num1 : num2;
	
	cout << "Larger number is: ";
		
	return 0;
}
