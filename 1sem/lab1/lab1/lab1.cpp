#include <iostream>
using namespace std;

int main() {
	int a, b;
	float square;
	cout << "Input A and B: ";
	cin >> a >> b;
	if (a >= b && (a > 0 && b > 0)) {
		square = pow(a, 2) - (4 * pow(((a - b) / 2), 2));;
		cout << "Square is " << square;
	}
	else {
		cout << "Incorrect input data!";
	}
}