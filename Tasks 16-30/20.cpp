#include <iostream>
#include <vector>
using namespace std;

int HOD(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << HOD(a, b);
    return 0;
}

int HOD(int a, int b)
{
    while (a and b)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a + b;
}