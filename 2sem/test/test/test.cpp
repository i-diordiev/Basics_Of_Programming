#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cin >> num;
	int mask = 1;
	int i = 0;
	while (!(num & (mask << i))) {
		num |= (mask << i);
		i++;
	}
	num ^= (mask << i);
	cout << num << endl;;

}