#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	float angle_a, angle_b, angle_c;
	cout << "Input a, b and c: ";
	cin >> a >> b >> c;
	angle_a = acos((pow(b, 2) + pow(c, 2) - pow(a, 2) / 2 * b * c));
	angle_b = acos((pow(a, 2) + pow(c, 2) - pow(b, 2) / 2 * a * c));
	angle_c = acos((pow(a, 2) + pow(b, 2) - pow(c, 2) / 2 * a * b));
	cout << angle_a << endl;
	cout << angle_b << endl;
	cout << angle_c << endl;
	if (angle_a > 90) {
		cout << "Angle A is obtuse" << endl;
	}
	else if (angle_a == 90) {
		cout << "Angle A is right" << endl;
	}
	else {
		cout << "Angle A is acute" << endl;
	}
	if (angle_b > 90) {
		cout << "Angle B is obtuse" << endl;
	}
	else if (angle_b == 90) {
		cout << "Angle B is right" << endl;
	}
	else {
		cout << "Angle B is acute" << endl;
	}
	if (angle_c > 90) {
		cout << "Angle C is obtuse" << endl;
	}
	else if (angle_c == 90) {
		cout << "Angle C is right" << endl;
	}
	else {
		cout << "Angle C is acute" << endl;
	}
	return 0;
}
