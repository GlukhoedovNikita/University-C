#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = -100; i <= 100; i++)
    {
        if (a * pow(i, 3) + b * pow(i, 2) + c * i + d == 0)
            cout << i << " ";
    }

    return 0;
}