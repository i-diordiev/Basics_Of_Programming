#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 1;
	float sin_x, y_add = 1, y_dil = 0, y;
	sin_x = sin(0.56);
	while (y_add > 0.00001) {
		y_add = (1 * sin_x) / (pow(n, 2));
		y_dil += y_add;
		n += 1;
	}
	y = 1 / y_dil;
	cout << "y = " << y << endl;
}
