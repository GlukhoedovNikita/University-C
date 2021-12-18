#include <iostream>
using namespace std;

int HOK(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << HOK(a, b);
    return 0;
}

int HOK(int a, int b)
{
    int a1 = a, b1 = b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return (a1 * b1) / a;
}