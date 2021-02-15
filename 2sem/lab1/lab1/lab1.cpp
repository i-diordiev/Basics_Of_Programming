#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
    int decr1 = 16,
        decr2 = 61,
        decr3 = -37;
    int res1, res2, res3;

    res1 = decrease_return(decr1);
    res2 = decrease_return(decr2);
    res3 = decrease_return(decr3);

    decrease_link(decr1);
    decrease_link(decr2);
    decrease_link(decr3);

    bool r1, r2, r3;

    compare_link(100, 100, r1);
    compare_link(-8, 125, r2);
    compare_link(132, 131, r3);

    bool rr1, rr2, rr3;

    rr1 = compare_return(100, 100);
    rr2 = compare_return(-8, 125);
    rr3 = compare_return(132, 131);

    system("pause");
    return 0;
}