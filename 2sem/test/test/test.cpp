#include <iostream>
using namespace std;


int main()
{
    int num;
    cin >> num;

    int i = 0;
	if (num == 0) {
		num = ~num;
	}
	else if (num == 2 || num == 4 || num == 8 || num == 16 || num == 32 || num == 64 || num == 128 || num == 256 || num == 512 || num == 1024) {
		num = ~num;
	} 
	else {
		while ((num & (1 >> i)) != 0)
		{
			num ^= (1 >> i);
			i++;
		}
		num ^= (1 >> i);
	}


    cout << num;
}
