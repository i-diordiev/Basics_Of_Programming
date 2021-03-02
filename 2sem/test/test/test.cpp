#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while (true) {
		int request;
		cout << "Input number for option:" << endl;
		cout << "1.\tFind lambda and Q" << endl;
		cout << "2.\tExit" << endl;
		cin >> request;
		if (request == 2) {
			break;
		}
		else if (request == 1) {
			double R, Ai, Ai5, Adiv, lambda, Q;
			cout << "Input R: ";
			cin >> R;
			cout << "Input Ai: ";
			cin >> Ai;
			cout << "Input Ai+5: ";
			cin >> Ai5;
			Adiv = Ai / Ai5;
			cout << "Ai/Ai+5 = " << Adiv << endl;
			lambda = 0.2 * (log(Adiv));
			cout << "lambda = 0.2 * ln(" << Adiv << ") = " << lambda << endl;
			Q = 3.1415 / lambda;
			cout << "Q = 3.1415 / " << lambda << " = " << Q << endl;
		}
	}
	return 0;
}
